#include <vector>
#include <iostream> 
#include <iterator>

int main(){
    std::vector<double> vec_a {234.34, 235.23, 634.43, 643.34};
    
    auto start { vec_a.begin() };
    auto end { vec_a.end() };

    for( ;start!=end; ++start){
        std::cout << *start  + static_cast<double>(1000.00) << "\n";
    }

    return 0; 
}