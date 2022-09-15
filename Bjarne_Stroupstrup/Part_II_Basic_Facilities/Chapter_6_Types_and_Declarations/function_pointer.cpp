#include <iostream> 

void (*f)(int); // this is a pointer to a function that takes a single int as an arg 
void (*fptr)(int, int); 

void function1(int x){
    std::cout << x << '\n'; 
}

void function2(int x, int y){
    std::cout << x*y  << '\n'; 
}

int main(){

    f = &function1; 
    f(234); 

    fptr = &function2;
    fptr(25, 25);


    return 0; 
}