#include <iostream> 

// In previous versions of Vector, we allocate an array of doubles and hold a pointer to the array in the object
// the problem is that after the pointer is released, the resourced (array) still exist in memory and aren't
// released

class Vector {
private: 
    double* elem; 
    int sz;

public: 
    Vector(int s) : elem { new double[s] }, sz { s }
    {
        for(int i=0; i!=s; ++i){
            elem[i] = 0;
        }
    }
    ~Vector(){ delete[] elem; } // elem was created with new[], must be destroyed with delete[]
    double& operator[](int i){ return elem[i]; }
    int size() const { return sz; }
};

void fct(int n){
    Vector v(n); 
    std::cout << v.size() << std::endl; 
    {
        Vector v2(2*n);
        std::cout << v2.size() << std::endl; 
    }

    // once control leaves the scope the objects created there are destroyed, if these are containers
    // then we need to ensure that their resources are released 
}

void ptr_test(){
    // hold a ptr to an array of 234 ints on the heap somewhere 
    int* arr_ptr { new int[10000] };
    for(int i = 0; i != 10000; ++i){
        arr_ptr[i] = i + 1000; 
    }
    for(int i = 0; i != 10000; ++i){
        std::cout << arr_ptr[i] << ' '; 
    }
    std::cout << std::endl; 
    delete[] arr_ptr; // release the memory that arr_ptr points to
}

int main(){
    ptr_test(); 
    //fct(34); 
    return 0; 
}