#include <iostream> 
#include <vector>

class Point {
public: 
    int x; 
    int y;

    Point(int a, int b) : x{a}, y{b} {}
};

class Shape {
public:
    virtual Point center() const =0;
    virtual void move(Point to) =0; 

    virtual void draw() const =0; 
    virtual void rotate(int angle) =0;

    virtual ~Shape(){}
};

void rotate_all(std::vector<Shape*>& v, int angle){
    for (auto p : v){
        p->rotate(angle);
    }
}

class Circle :public Shape { 
public: 
    Circle(Point p, int rr);

    Point center() const { return x; }
    void move(Point to) { x = to; }

    void draw() const; 
    void rotate(int){}

private:
    Point x; 
    int r; 
};

class Smiley : public Circle { 
public: 
    Smiley(Point p, int r) : Circle{p, r}, mouth{nullptr}{}
    ~Smiley(){
        delete mouth; 
        for(auto p : eyes) delete p; 
    }
    void move(Point to);

    void draw() const; 
    void rotate(int);

    void add_eye(Shape* s) {eyes.push_back(s);}
    void set_mouth(Shape* s);
    virtual void wink(int i); 

private:
    std::vector<Shape*> eyes;
    Shape* mouth;     
};

int main(){
    Smiley s(Point(3,4), 3);
    return 0;
}