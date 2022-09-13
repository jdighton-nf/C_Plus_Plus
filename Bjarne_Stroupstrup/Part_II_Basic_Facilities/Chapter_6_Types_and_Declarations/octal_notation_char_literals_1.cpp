#include <iostream> 

int main(){

    char v1[] = "a\xah\129"; 

    std::cout << v1 << '\n';

    return 0; 
}