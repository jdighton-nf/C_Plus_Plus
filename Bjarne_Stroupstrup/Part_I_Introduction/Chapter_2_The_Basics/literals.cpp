#include <iostream> 

int main(){
    // this is ok because your dereffing the arr ptr to 
    // the first char of the arr which is 'a' and then 
    // comparing it to char 'a'
    bool wut { *"a" == 'a' }; 
    std::cout << wut << '\n'; 

    // this will not work 
    // bool wut "a" == 'a'; 
    // error
    // comparision between pointer and an integer
    // 'const char *' and 'char' 
    // "a" is an array of char and would come back as a 
    // pointer to the first element of the array 
    // ie. const char* 
    // you can't compare a pointer to a char to a char

    return 0;
}