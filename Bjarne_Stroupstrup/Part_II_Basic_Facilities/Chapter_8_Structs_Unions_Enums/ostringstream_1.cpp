#include <iostream> 
#include <sstream>
#include <string> 

void f(std::string& wut){
    std::ostringstream buffer; 
    buffer << wut; 
    std::string str { buffer.str() }; 
    std::cout << str << '\n'; 
}; 

int main(){
    std::string x {"this is a string"}; 
    f(x); 
    return 0; 
}