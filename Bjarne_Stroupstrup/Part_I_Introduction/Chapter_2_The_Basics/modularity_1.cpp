#include <iostream> 
#include <cmath>

double sqrt(double); // this is a declaration require only types, not variable names 

class Vector {
public:
    Vector(int);
    double& operator[](int i); // the compiler doesn't care if I give the int param a name or name
    int size(); 
private: 
    double* elem; // pointer to an array of sz doubles
    int sz; 
};

int main(){

    return 0; 
}

// no impletmentation is specified above, only the the declarations are laid out above. this code is valid and compiles with no errors. 
// a declaration is different from a definition 

double sqrt(double d){ // definition for above declaration 
    return std::sqrt(d); 
}

Vector::Vector(int s) // constructor definition for declaration in Vector class 
    : elem{ new double[s] }, sz{ s }
    {}

double& Vector::operator[](int i){
    return elem[i]; // this has access to the private Vector member elem
}

int Vector::size(){
    return sz; // has access to private Vector member sz because size() is a member function
}