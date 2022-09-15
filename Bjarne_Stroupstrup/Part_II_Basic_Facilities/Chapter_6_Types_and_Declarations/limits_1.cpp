#include <iostream> 
#include <limits>
using namespace std; 

int main(){

    // on my system size of long int == size of long long int 
    cout << "sizeof long " << sizeof(1L) << '\n';
    cout << "sizeof long long " << sizeof(1LL) << '\n';

    cout << "largest float " << numeric_limits<float>::max() << '\n';
    cout << "largest double " << numeric_limits<double>::max() << '\n';
    cout << "largest long double " << numeric_limits<long double>::max() << '\n';
    cout << "char is signed " << numeric_limits<char>::is_signed << '\n'; 

    return 0; 
}