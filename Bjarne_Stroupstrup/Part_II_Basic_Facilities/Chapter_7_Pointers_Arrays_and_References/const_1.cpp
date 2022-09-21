#include <iostream>

int main(){
    const char* arr[] { new char[]{"this is a string"} }; 
    std::cout << *arr << '\n';
    return 0; 
}