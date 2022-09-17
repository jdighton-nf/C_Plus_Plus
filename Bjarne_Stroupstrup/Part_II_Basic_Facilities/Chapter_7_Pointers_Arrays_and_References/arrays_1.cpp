#include <iostream> 
#include <chrono>
#include <ctime> 
#include <ratio>


int main(){
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now(); 
    long long int sz { 1024 * 1000000LL };
    int* arr_pointer { new int[sz]};
    int i{};
    while(i!=sz){
        arr_pointer[i] = i + 100;
        ++i; 
    }

    delete[] arr_pointer; 
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now(); 
    std::chrono::duration<double> elapsed { end - start }; 
    std::cout << elapsed.count() << std::endl; 
    return 0; 
}