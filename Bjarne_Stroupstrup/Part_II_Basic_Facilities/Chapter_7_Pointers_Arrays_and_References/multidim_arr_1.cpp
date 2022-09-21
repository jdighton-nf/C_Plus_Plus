#include <iostream> 

int ma[3][5]; // 3 arrays with 5 ints each

void init_ma(){
    for(int i{}; i!=3; ++i){
        for(int j{}; j!=5; ++j){
            ma[i][j] = 10 * i + j;
        }
    }
}

void print_ma(){
    for(int i{}; i!=3; ++i){
        for(int j{}; j!=5; ++j){
            std::cout << ma[i][j] << '\t';
        }
    }
}

void wut(const char* ptr){
    std::cout << *ptr << '\n';     
}

int main(){ 
    char asd { 'd' }; 
    const char* ptr { &asd }; 
    wut(ptr); 
    return 0; 
}