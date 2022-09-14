#include <iostream>

int main(){

    wchar_t a { 0x64 };

    // utf=8 string
    std::basic_string<char32_t> poo = u8"this is a string";

    auto size_a { sizeof(a) };
    std::cout << size_a << '\n';
    std::cout << a << '\n';

    std::cout << poo << '\n';
    

    return 0; 
}