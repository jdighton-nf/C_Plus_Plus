#include <iostream> 
#include <initializer_list>
#include <vector>
#include <istream>

// how do I include <vector> but in a namespace other than std so it doesn't collide with my defition 
//  you DON'T. Just have your class extend an existing class so that you can use the member functions of the parent. 

class CustomVector : public std::vector<double> {
public:
    CustomVector(std::initializer_list<double> il){
        sz = { il.size() }; // no need to do sizeof, we have std::initializer_list::size() 
                            // std::initializer_list::size() returns type unsigned long

        elem = { new double[sz] };

        // using copy() is the same as what I was doing by manually iterating except probably tested and better
        std::copy(il.begin(), il.end(), elem);
    }
    CustomVector(int s){
        sz = s; 
        elem = { new double [sz] };
    }
    CustomVector(){
        
    }
    ~CustomVector(){ delete[] elem; }
    double& operator[](int i){ return elem[i]; }
    int size() const { return sz; }
private: 
    double* elem;
    unsigned long sz; 

};

// inializer lists do not convert to std::istream
CustomVector read(std::istream& is){
    CustomVector v{}; 
    for(double d; is>>d;){ // little wierd here... used the for loop to keep the scope of d limited to the loop
                            // instead of a condition we're reading from the input stream into d 
                            // the for loop can test for EOF, and the is>>d will be 'true' untill we find EOF
                            // d gets pushed into the vector and reset for the next read from is
        v.push_back(d);
    }
    return v; 
}
