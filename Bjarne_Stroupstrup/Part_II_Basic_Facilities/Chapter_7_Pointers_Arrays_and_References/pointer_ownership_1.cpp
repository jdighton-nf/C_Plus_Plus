#include <iostream> 

int main(){

    int* pn { new int{234}}; 
    delete pn; 
    int ln { 23423 }; 
    int* lnp { &ln }; 

    std::cout << *lnp << '\n'; 
    delete lnp; 

    return 0;
}