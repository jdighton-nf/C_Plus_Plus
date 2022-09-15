#include <iostream> 
#include <vector>

void user(const std::vector<int>& vx){
    constexpr int bufmax { 1024 }; 
    // can't apply alignof() to a vec

    
}

int main(){

    std::vector<int> vec {}; 
    user(vec); 

    return 0; 
}