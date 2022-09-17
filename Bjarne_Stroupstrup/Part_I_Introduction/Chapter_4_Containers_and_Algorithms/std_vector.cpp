#include <iostream>
#include <string> 
#include <vector>

struct Entry {
    std::string name; 
    int number; 
};

std::vector<Entry> phone_book = {
    {"David Hume", 13234},
    {"Karl Popper", 235453},
    {"John Walker", 34645}
}; 

std::ostream& operator<<(std::ostream& os, const Entry& e){
    return os << "{\"" << e.name << "\"," << e.number << "}";
}

std::istream& operator>>(std::istream& is, Entry& e){
    char c, c2; 
    if(is>>c && c=='{' && is>>c2 && c2=='"'){ // starts with {"
        std::string name; 
        while(is.get(c) && c!='"'){
            name += c; 
        }
        if(is>>c && c==','){
            int number = 0; 
            if(is >> number >> c && c=='}'){
                e = {name, number};
                return is; 
            }
        }
    }
    std::cout << "stream error" << '\n';
    return is; 
}


void print_book(const std::vector<Entry>& book){
    for(const auto& x : book){
        std::cout << x << "\n";
    }
}

int main(){
    print_book(phone_book);
    return 0;
}