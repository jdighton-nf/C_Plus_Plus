#include <iostream> 

void increment(int& aa){
    ++aa; 
}

int f(){
    int x = 1; 
    increment(x);
    return x;  
}

int main(){

    std::cout << f() << '\n'; 

    return 0; 
}