#include <iostream> 
#include <string> 
#include <cstring>
#include <cstdint>

int main(){
    
    double a { 2.5e-8L };
    std::cout << a + 2.6e+8L << "\n";

    return 0; 
}