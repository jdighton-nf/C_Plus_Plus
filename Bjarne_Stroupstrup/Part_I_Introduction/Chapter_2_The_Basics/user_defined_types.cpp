#include <iostream> 

struct Vector {
    int sz;         // number of elements 
    double* elem;   // pointer to array of elements 
};

// the struct doesn't do much on it's own, although we could declare one if we wanted

// need to be able to construct a vector with a function 
void vector_init(Vector& v, int s){
    // v.elem gets a pointer to some memory allocated by the new operator
    v.elem = new double[s]; // allocate an array of s doubles on the free store
    v.sz = s; 
}

void read_through_pointer(const Vector* v){
    std::cout << v->sz << std::endl; 
}

double read_and_sum(int s){
    Vector v;
    vector_init(v, s);
    for(int i=0; i!=s; ++i){
        std::cin >> v.elem[i];
    }
    double sum = 0;
    for(int i=0; i!=s; ++i){
        sum += v.elem[i];
    }

    return sum; 
}

// what I've developed so far is a datatype, an initializer function, and a function to 
// actually do something with the data 
// this is sort of like a class by a different name 

int main(){
    //std::cout << read_and_sum(10) << std::endl; 

    // demo access through pointer 
    Vector q; 
    vector_init(q, 5);
    const Vector* q_ptr = &q; 
    read_through_pointer(q_ptr);
    return 0; 
}