#include <iostream> 
#include "container_initializer_list_1.cpp"
#include <initializer_list>

// this is more the interface for a container, doesn't even have a constructor
// it is not possible to instantiate a Container on it's own. 
// this can only serve as an interface for a class that extends it. 
class Container {
public: 
    virtual double& operator[](int) =0; // declare a virtual class - this must be defined later
    virtual int size() const =0; 
    virtual ~Container(){};
};

// Container can be used like this - why would this work is nothing is defined in Container? 
void use(Container& c){
    const int sz = c.size();

    for(int i=0; i!=sz; ++i){
        std::cout << c[i] << "\n";
    }
}

// extends Container
class Vector_container : public Container { 
    CustomVector v(); 
public:
    Vector_container(std::initializer_list<double> s): v(s) {}
    ~Vector_container(){}

    double& operator[](int i){return v[i];}
    int size() const { return v.size(); }
};

void g(){
    Vector_container vc {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    // use(vc); 
}

int main(){

    return 0; 
}