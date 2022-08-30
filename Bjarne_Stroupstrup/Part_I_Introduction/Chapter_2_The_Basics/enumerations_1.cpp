#include <iostream> 

enum class Color {
    red, 
    blue, 
    green
};

enum class Traffic_light {
    green, 
    yellow, 
    red
};

int main(){
    Color col = Color::red; 
    Traffic_light light = Traffic_light::red; 
    return 0; 
}