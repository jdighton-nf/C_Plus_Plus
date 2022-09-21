#include <iostream> 
#include <string> 
using std::string; 

int main(){

    string x {"This is a string"};  // "This is a string" is an Rvalue
    std::cout << &x << ": " << x << '\n'; 

    string&& y { "This is an Rvalue" };
    std::cout << &y << ": " << y << '\n'; 

    return 0;
}