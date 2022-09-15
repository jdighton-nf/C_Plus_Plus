#include <iostream> 



int main(){

    int (*name)(int, int) { 234 }; 

    std::cout << name << '\n';

    return 0; 
}