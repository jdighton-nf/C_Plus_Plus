#include <iostream> 

// sometimes you need to ensure that a char is what you need / expect it to be. Otherwise your values may be truncated and your program won't function. 

int main(){
    static_assert(sizeof(int)>=4,"sizeof(int) to small"); // make sure an int is at least 4 bytes 
}