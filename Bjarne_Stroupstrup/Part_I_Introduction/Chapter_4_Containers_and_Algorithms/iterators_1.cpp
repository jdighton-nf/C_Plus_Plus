#include <algorithm>
#include <string>
#include <iostream> 

bool has_char(const std::string& s, char c){
    auto p = find(s.begin(), s.end(), c);
    if(p!=s.end()){
        return true; 
    }
    else {
        return false; 
    }
}

int main(){
    std::string str {"This is a string"};
    std::cout << has_char(str, 'i') << "\n";

    return 0; 
}