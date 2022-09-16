#include <iostream> 
#include <vector>
using std::vector;
using std::string; 

void f(vector<string>& vs){

    // error non-const lvalue reference to type vector<...> cannot bind to a temp of type vector<...> 
    // made v2 a const and the error vanished
    const vector<string>& v2 = std::move(vs); //std::move(v2) is an x value because it has identity, AND is movable 
    std::cout << v2[0] << '\n';
}

int main(){

    vector<string> one {"this", "is", "a", "vector", "of", "string"};
    f(one); 

    int x { 2342 }; 
    const int& xr = std::move(x); 
    x = 252345; 
    std::cout << xr << ' ' << x << std::endl; 

    static int y { 23423 }; 

    return 0; 
}