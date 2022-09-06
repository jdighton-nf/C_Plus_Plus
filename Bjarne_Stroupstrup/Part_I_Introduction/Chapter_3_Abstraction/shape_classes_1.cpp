#include <iostream> 

class Shape {
public:
    virtual Point center() const =0; 
    virtual void move(Point to) =0; 
};

int main(){}