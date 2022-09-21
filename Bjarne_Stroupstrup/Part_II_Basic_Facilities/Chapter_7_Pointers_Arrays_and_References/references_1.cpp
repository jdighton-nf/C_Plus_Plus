#include <iostream> 

void f(){
    int var = 1; 
    int& r {var};
    int x = r; 
    r = 2; 
}

void g(){
    int var=0;      // initialize var
    int& rr {var};  // bind reference rr to var
    ++rr;           // increment var through reference rr
    int* pp = &rr;  // create a pointer bound to var through the reference rr
    std::cout << *pp << '\n'; 
    std::cout << (&var == pp) << '\n'; 
}

int main(){
    f(); 
    g(); 
    return 0; 
}