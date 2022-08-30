#include <iostream> 
#include "Vector.h"
#include <cmath>
#include <stdexcept>

double sqrt_sum(Vector& v){
    double sum = 0; 
    for(int i=0; i!=0; ++i){
        sum += std::sqrt(v[i]);
    }
    return sum; 
}

void fill_vector(Vector& v){
    for(int i { 0 }; i != v.size(); ++i ){
        v[i] = i + 100; 
    }
}

void f(Vector& v, int not_in_range){
// cause an exeption and catch it
    try {
        std::cout << v[not_in_range] << std::endl; 
    }
    // std::out_of_range is a type, so you use a name here
    // how would we handle an out of range error other than warning the user?
    catch(std::out_of_range e){
        std::cout << "handled exeption: " << e.what() << std::endl;
    }
}

void test(){
    try{
        Vector v(-27);
    }
    // if we provide an invalid number of elems
    catch(std::length_error e){
        std::cout << e.what() << std::endl; 
    }
    // if new fails to allocate the requested memory 
    catch(std::bad_alloc e){
        std::cout << e.what() << std::endl; 
    }
}

int main(){
    Vector v(5); 
    fill_vector(v);

    for(int i=0; i!=v.size(); ++i){
        std::cout << v[i] << " "; 
    }
    std::cout << std::endl; 

    /* 
        This out of range access does not throw an error, so we would probably
        miss it and experience undefined behavior
        I think it SHOULD throw some sort of error 
    */

    // std::cout << v[343] << std::endl; 

    // controlled exception
    //f(v, 10);

    // try to intentially allocate elements with a bad value (-27)
    test(); 

    return 0; 
}