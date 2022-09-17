#include <iostream> 
#include <string>

struct Entry { 
    std::string name;
    int number; 
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

int main(){
    Entry a1; 
    a1.name = "Joseph";
    a1.number = 123123; 
    std::cout << a1 << "\n";

    Entry a2; 
    std::cin >> a2;
    std::cout << a2 << "\n";  
}
