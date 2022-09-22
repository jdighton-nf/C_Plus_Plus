#include <iostream>

struct Address {
    const char* name; 
    int number; 
    const char* street; 
    const char* town; 
    char state[2];
    const char* zip;
};

int main(){
    Address* addr { new Address }; 
    addr->name = "John Johnson";

    std::cout << addr->name << '\n';
    return 0; 
}