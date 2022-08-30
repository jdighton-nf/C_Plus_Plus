// definitions for Vector
#include "Vector.h"
#include <stdexcept> // contains out_of_range

Vector::Vector(int s)
{
    if(s<0){
         throw std::length_error{"provided negative size"};
    }
    elem = { new double[s] };
    sz = { s }; 
    // can't use a naked initializer list because the variable was already
    // declared in the interface
}

double& Vector::operator[](int i){
    // detect attempted out-of-range access
    if(i<0 || size()<=i){
        // the {} field in out of range is the what() for the exeption 
        throw std::out_of_range {"Vector::operator[]"};
    }
    
    return elem[i];
}

int Vector::size(){
    return sz; 
}

// if include this cpp file, then we redefine
// the interface because of the include here
// but if I remove the include here, then these
// definitions won't be applied an interface and
// and it'll throw an error 