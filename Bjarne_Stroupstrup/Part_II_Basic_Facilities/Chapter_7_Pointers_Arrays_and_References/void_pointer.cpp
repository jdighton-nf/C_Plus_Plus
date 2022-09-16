void f(int* pi){
    void* pv = pi;  // implicit conversion of int* to void* OK
    *pv;            // error: can't dereference void
    ++pv;           // error: can't increment void* (the size of the pointed-to object is unknown )

    int* pi2 = static_cast<int*>(pv);

    double* pd1 = pv; 
    double* pd2 = pi; 
    double* pd3 = static_cast<double*>(pv);
}

int main(){

    return 0; 
}
