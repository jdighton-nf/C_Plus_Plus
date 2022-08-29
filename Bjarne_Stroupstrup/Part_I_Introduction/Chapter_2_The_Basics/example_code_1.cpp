#include <iostream>
using namespace std; 

// function 'square' takes a double, returns a double
double square(double x){
    return x*x; 
}

void print_square(double x){
    cout << "the square of " << x << " is " << square(x) << "\n";
}

int main(){
    print_square(1.234); 
}

// shows how to make namespaces visible without explicit specification per-call 
// shows how main calls other functions 
