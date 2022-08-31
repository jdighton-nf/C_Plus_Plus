#include <iostream> 

class complex {
    double re, im; // representation
public:
    complex(double r, double i) : re{r}, im{i} {}   // re and im
    complex(double r) : re{r}, im{0} {}             // re only
    complex() : re{0}, im{0} {}                     // default

    double real() const { return re; }      // does not alter the data
    void real(double d){ re=d ;}          // sets the re componant
    double imag() const { return im; } 
    void imag(double d) { im=d; }         // sets the imag componant

    // add and subtract in place operators
    // defined in-class because they must directly access the representation
    complex& operator+=(complex z){re+=z.re, im+=z.im; return *this; }
    complex& operator-=(complex z){re-=z.re, im-=z.im; return *this; }

    // could be defined out-of-class because they do not need to directly access the representation
    complex& operator*=(complex); 
    complex& operator/=(complex);

    // functions defined in a class are inlined by default
};

complex& complex::operator*=(complex z){ // to do
    // (a + ib) (c + id) = (ac - bd) + i(ad + bc).    
    double a = real();
    double b = z.real(); 
    double c = imag();
    double d = z.imag(); 

    double real_comp = (a * c) - (b * d);
    double im_comp = (a * d) + (b * c);

    real(real_comp);
    imag(im_comp);

    return *this; 
}

complex& complex::operator/=(complex z){ // to do
    return *this;
}

complex operator+(complex a, complex b) {return a += b; }
complex operator-(complex a, complex b) {return a -= b; }
complex operator-(complex a){ return {-a.real(), -a.imag()}; }
complex operator*(complex a, complex b) { return a *= b; }
// complex operator/(complex a, complex b) { return a /= b; }

bool operator==(complex a, complex b){
    return a.real() == b.real() && a.imag() == b.imag();
}

void f(complex z){
    complex a {2.3};
    complex c {a + z * complex{1, 2.3}};
}

int main(){
    complex c {2.3, 5.4};
    f(c); 
    std::cout << c.real() << std::endl; 
    return 0; 
}

