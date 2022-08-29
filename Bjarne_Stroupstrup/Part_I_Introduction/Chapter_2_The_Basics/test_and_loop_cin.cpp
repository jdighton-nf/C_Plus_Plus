// 2.2.4 
#include <iostream> 
using namespace std; 

bool accept(){
    cout << "Do you want to proceed? y/n\n";
    char answer = 0;  
    cin >> answer; 
    if(answer == 'y') { return true; }
    return false; 
}

int main(){

    if(accept()){
        cout << "got y\n";
    } else { 
        cout << "got n\n";
    }

    // i initially had a warning because I compared answer to "y", which throws an error
    // can't compare a char literal to a string literal because the string literal is an arr
    // of char and we don't have a conversion that makes sense 
    "asdasdf"; // string literal, an array of char
    'A'; // a single char literal


    return 0;
}