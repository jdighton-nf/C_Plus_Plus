#include <iostream> 

enum class Color { red, blue, green };
enum class Traffic_light { green, yellow, red };

Color col = Color::red; 
Traffic_light light = Traffic_light::red; 

// this returns a reference to a Traffic_light, but isn't a member of the class
// so how do we call this func?
Traffic_light& operator++(Traffic_light& t){
    // prefix increment
    switch(t){
        case Traffic_light::green:      return t=Traffic_light::yellow; 
        case Traffic_light::yellow:     return t=Traffic_light::red; 
        case Traffic_light::red:        return t=Traffic_light::green; 
    }
}

int main(){
    Traffic_light light { Traffic_light::red };
    ++light; 

    

    return 0; 
}