#include <cstdint> 
#include <iostream> 

int main(){

    std::cout << alignof(char) << '\n';
    std::cout << alignof(int) << '\n';
    std::cout << alignof(double) << '\n';

    return 0; 
}