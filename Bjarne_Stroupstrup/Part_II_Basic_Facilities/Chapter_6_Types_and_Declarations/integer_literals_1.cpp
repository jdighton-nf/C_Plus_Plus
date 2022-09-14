#include <iostream>
#include <limits>

int main(){

    unsigned short int first { 65535 }; // on my system this is a 2-byte number, 16 bit
    short int second { 32767}; // 32768 causes implicit conversion to -32768 due to setting the MSB which is also the sign bit. 15 bit

    unsigned int third { 4294967295 }; // on my system an unsigned int is 32 bits
    signed int fourth { 2147483647 }; // on my system a signed int allows for 31 bits numeric data, 1 bit sign

    unsigned long int fifth {  18446744073709551615UL }; // on my system usign long int is a full 64 bits
    signed long int sixth   {   9223372036854775807 };

    auto max_double { std::numeric_limits<double>::max() }; // on my system this is 1.79769e+308
    auto max_long_double { std::numeric_limits<long double>::max() };
    double max_test { 1.79769e+308 }; // this is an absolutely huge number 
    long double max_long_double_test { 1.18973e+4932L }; // has to be declared with the L suffix to prevent implicit conversion error
    // this is a 64 bit float point, 11 mantissa bits, 52 fraction bits 

    std::cout << first << '\n';
    std::cout << second << '\n';
    std::cout << third << '\n';
    std::cout << fourth << '\n';
    std::cout << fifth << '\n';
    std::cout << sixth << '\n';
    std::cout << max_double << '\n';
    std::cout << max_test << '\n';
    std::cout << max_long_double << '\n';

    return 0; 
}