#include <iostream> 
#include "stdio.h"

int main(){

    const unsigned million { 1000000 };
    const unsigned ten { 10 }; 
    unsigned q { }; 
    unsigned z { };

    // in addition to the side effect of increment the value fed to it, ++int also returns the value after incrementing
    // conversly int++ returns the pre-incremented value 

    while(true){
        unsigned temp { ++q };
        unsigned tempz { z++ }; 
        if(temp % ten == 0) printf("++int %i  %i\n", temp, q); 
        if(tempz % ten == 0) printf("int++ %i  %i\n", tempz, z);
        if(temp == 0xFF) break; 
    }

    return 0; 
}