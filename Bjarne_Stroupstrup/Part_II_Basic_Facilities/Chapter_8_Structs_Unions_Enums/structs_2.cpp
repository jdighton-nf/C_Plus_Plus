#include <iostream> 
#include <vector>

class Point {
public:
    Point(int a, int b){
        x = a;
        y = b; 
    }
    int x;
    int y;
};

struct Points{
    std::vector<Point> elem; 
    Points(Point p0){ elem.push_back(p0); }
    Points(Point p0, Point p1){ elem.push_back(p0); elem.push_back(p1); }
};

int main(){
    Points x1{ {100, 200} }; 
    return 0;
}