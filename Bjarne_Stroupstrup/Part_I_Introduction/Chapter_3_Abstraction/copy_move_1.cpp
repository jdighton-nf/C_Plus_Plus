#include <iostream> 
#include <initializer_list>

class Vector{ 
private: 
    int sz; 
    double* elem; 

public: 
    Vector(int s) : sz{s}, elem{new double[sz]}{}
    Vector(const std::initializer_list<double> il){
        auto size = il.size(); 
        sz = size; 
        elem = { new double[size] };
        auto start = il.begin();
        auto end = il.end();

        for(int i=0; start!=end; ++i){
            elem[i] = *start; 
            ++start; 
        }

    }
    ~Vector(){ delete[] elem; }

    // copy constructor
    Vector(const Vector& a) : sz{a.sz}, elem{new double[sz]}
    {
        for(int i=0; i!=sz; ++i){
            elem[i] = a.elem[i];
        }    
    }

    // copy assignment
    Vector& operator=(const Vector& a); // copy assignment 

    double& operator[](int i) const {
        return elem[i];
    }

    int size() const; 

};

// create a pointer to some new resources, copy the new stuff into the new resources, release the old resources
Vector& Vector::operator=(const Vector& a){
    double* p = new double[a.sz];
    for(int i=0; i!=a.sz; ++i){
        p[i]=a.elem[i];
    }
    delete[] elem; // delete old elements
    elem = p; 
    sz = a.sz; 
    return *this; 
}

int main(){

    return 0;
}