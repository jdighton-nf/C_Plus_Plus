#include <iostream>
// just wanted to see how it works with implicit conversions
// int * double can produce an int or a double depending on the declared type of the 
// variable holding the result double C = int a * double b produces a double 

int main(){
    int a = 8;
    double b = 8.00001;

    int c = a * b;
    double d = a * b; 

    std::cout << c << "\n";
    std::cout << d << "\n";

    double f { 234.234234 };
    double g { -f };
    // int h = -f; // this doesn't throw any issues

    int h = { static_cast<int>(-f) }; // this requires a static_cast to silence warnings
    // list initialization doesn't allow shortening so you have to do it explicitly with a 
    // static cast 

    std::cout << f << " " << g << " " << h << "\n";

    double i { 2.2 };
    int j { 7 };
    d =  { i * j }; // assign result back to a double
    j = { static_cast<int>(i * j) }; // assign back to an int requires static cast
    int l = i * j; // no problem - makes it possible to miss the implicit consersion

    std::cout << d << "\n";
    std::cout << j << "\n";
    std::cout << "33 makes no sense here because it is the result of us not being type safe. 2.2 * 7 is not 33\n"; 
    std::cout << l << "\n";

    //int z { 500.234 }; // won't compile
    int x { static_cast<int>(500.234) }; // this works but it's a bad idea

    // you don't need to specify the type if it can be deduced by the initializer 
    auto char_a { "A" };
    auto int_a { 123 };
    double double_a { 234.234 };
    float asdf { 234.234 };

    // what if it chooses float instead of double as a type? auto seems unwise except
    // for ints and chars
    // what it's a long int instead of an int? or something similar 

    // can we decrement a float? 
    double adsf { 112.001};
    

    return 0; 
}