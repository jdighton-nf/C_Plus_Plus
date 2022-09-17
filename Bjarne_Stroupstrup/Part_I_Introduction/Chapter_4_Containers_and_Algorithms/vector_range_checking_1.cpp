#include <iostream> 
#include <vector> 
#include <string> 
#include <stdexcept>
#include <list>

class Entry {
public:
    std::string name;
    int number; 
    
    Entry(std::string input){
        
    }
};

template<typename T>
class Vec : public std::vector<T> {
    using std::vector<T>::vector; // use the constructors from the parent
    
    // we're going to use everything from std::vector except the subscript operator that we 
    // we will redefine subscripting to do range checking 
public:
    T& operator[](int i){
        return std::vector<T>::at(i);
    }
    const T& operator[](int i) const {
        return std::vector<T>::at(i);
    }
    // I am not clear on why we define the operator twice 
};

void checked(Vec<Entry>& book){
    try {
        book[0] = {"Joe", 99999};
        book[book.size()] = {"Nigger", 324324};
    }
    catch(std::out_of_range){
        std::cout << "range error\n";
    }
}

std::list<Entry> phone_book = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Russel", 345678}
};

int get_number(const std::string& s){
    for(const auto& x : phone_book){
        if(x.name == s){
            return s.number;
        }
        return 0; // represents 'no number found' 
    }
}

int main(){
    //Vec<Entry> book(100);
    //checked(book); 
    return 0;
}