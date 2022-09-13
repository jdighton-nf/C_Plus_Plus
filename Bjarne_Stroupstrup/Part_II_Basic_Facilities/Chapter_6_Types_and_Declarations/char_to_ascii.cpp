#include <iostream> 
#include "stdio.h"

void intval(){
    for(char c; std::cin >> c;){
        std::cout << "the value of " << c << " is " << int{ c } << '\n';
    }
}


// what is happening here? 
void digits(){
    for(int i=0; i!=10;++i){
        std::cout << static_cast<char>('0'+i) << '\n'; 
      
    }
}

int main(){
    //digits(); 

    // char a { 10 }; 
    // char b { 10 };
    // char c = a + b ; // char + char returns an int, which is narrowed back to a char. to do {a + b} to have to static_cast the int back to a char like
                        // char c { static_cast<char>( a + b )} 

    char zero { '0' }; // '0'
    int zero_int { zero }; // is 48 when represented as an int 

    char x { 0 };

    for(int i=0; i!=256;++i){ 
        std::cout << x << "   " << static_cast<int>(x) << "   " << i << '\n';
        ++x; 
    }

    // std::cout << zero << '\n';
    // std::cout << zero_int << '\n';

    return 0; 
}

