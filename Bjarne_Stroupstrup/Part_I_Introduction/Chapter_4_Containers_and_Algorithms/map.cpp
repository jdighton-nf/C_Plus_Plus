#include <string>
#include <map>
#include <iostream>

std::map<std::string, int> phone_book{
    {"Dave", 123},
    {"Phil", 234}, 
    {"Tom", 345}
};

int get_number(const std::string& s){
    return phone_book[s];
}

int main(){
    std::cout << get_number("Dave") << "\n";
    std::cout << get_number("Tom") << "\n";
    return 0;
}