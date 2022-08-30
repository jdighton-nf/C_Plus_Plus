// we constructed the precurser to a class in 'user_defined_types.cpp'
// the class syntax seems to be more like syntactic sugar to ties it together 
#include <iostream> 

class Vector {
    public:
        // these can access whatever elements are defined in private
        Vector(int s)
        : elem{ new double[s] }, sz{ s }
        {}
        ~Vector(){
            delete[] elem; 
        }
        // allows us to subscript private member elem
        double& operator[](int i) { 
            return elem[i]; 
        }
        // allows us access to private member sz
        int size(){
            return sz; 
        }
    
    private: 
        double* elem;   // pointer to the elements
        int sz;         // the number of elements to initialize 
};

double read_and_sum(int s){
    // this function leverages the operator[] of Vector, would not work without the 
    // operator[] defined
    Vector v(s);
    for(int i=0; i!=0; ++i){
        std::cin >> v[i];
    }

    double sum { 0 };
    for(int i=0; i!=v.size(); ++i){
        sum+=v[i];
    }
    return sum; 
}

int main(){
    std::cout <<  read_and_sum(5) << std::endl;

    return 0; 
}