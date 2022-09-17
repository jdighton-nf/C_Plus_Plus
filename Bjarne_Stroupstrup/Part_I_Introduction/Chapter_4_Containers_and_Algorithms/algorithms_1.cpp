#include <iostream> 
#include <string>
#include <vector>
#include <list> 
#include <algorithm>

struct Entry {
    std::string name; 
    int number; 
};

bool operator<(const Entry& x, const Entry& y){
    return x.name<y.name;
}

void f(std::vector<Entry>& vec, std::list<Entry>& lst){
    std::sort(vec.begin(), vec.end());
    std::unique_copy(vec.begin(), vec.end(), lst.begin());
}

int main(){

    return 0;
}