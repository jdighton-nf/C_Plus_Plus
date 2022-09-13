#include <iostream>
#include <limits>

int main(){
    char arr[] = "this is an \x00A array of chars";
    std::cout << arr << '\n';

    int char_limit_max { std::numeric_limits<char>::max() };
    int char_limit_min { std::numeric_limits<char>::min() };

    // on my system char is signed char 
    std::cout << char_limit_min << " to " << char_limit_max << '\n';

    return 0; 
}