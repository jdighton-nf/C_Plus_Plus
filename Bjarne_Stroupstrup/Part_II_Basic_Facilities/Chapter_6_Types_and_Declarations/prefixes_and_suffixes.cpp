#include <iostream>

int main(){

    wchar_t a { 0x64 };

    // utf=8 string
    
    float x { 234.34F };

    auto size_a { sizeof(a) };
    std::cout << size_a << '\n';
    std::cout << a << '\n';

    std::cout << x << '\n';
    

    return 0; 
}