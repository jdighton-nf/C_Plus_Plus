#include <iostream> 
// consts are used primarily for specifying interfaces but I want to understand why?

// why is const needed in the interface? x is passed by copy. where does const become 
// important 
void test(const int* x){
    std::cout << *x << "\n";
    /* 
        *x = 23423; // this is illegal and won't compile
        it would be fine if x weren't declared as a const in the func signature
        passing a ref as a const makes it so the origional data refered to cannot be changed
    */
    std::cout << *x << "\n";
}

int main(){
    int x = 100;
    std::cout << x << "\n";
    test(&x);
    std::cout << x << "\n";

    return 0; 
}