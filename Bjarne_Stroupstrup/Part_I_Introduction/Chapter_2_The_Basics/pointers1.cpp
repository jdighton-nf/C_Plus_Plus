#include <iostream>
using namespace std; 

void copy_fct(){
    int v1[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10]; // we'll copy into this

    for(auto i=0; i!=10; ++i){
        v2[i]=v1[i];
    }
    for(auto i=0; i!=10; ++i){
        cout << v2[i] << endl; 
    }    
}

void print(){
    int v[] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // illustrates the range-for statement 
    for(auto x: v)
        cout << x << "\n";
    
    for(auto x: {10, 21, 32, 43, 54, 65})
        cout << x << "\n";
}

void ptr_to_arr(){
    char v[6] {'a', 'b', 'c', 'd', 'e'};
    char* p = &v[3]; // a pointer to the 4th element of v
    char x = *p; 

    cout << x << "\n";
    ++x;
    cout << x << "\n";\
}

void increment(){
    // range-for doesn't have to copy, it can also use a reference
    int v[] {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // references are similar to pointers but you don't need to deref a reference to get at the value 
    for(auto& x: v){
        cout << x << endl; 
        ++x; 
    }
}

void nullptr_example(){
    int* bloop { nullptr };
}

int count_x(char* p, char x){
    // it is often wise to check that a pointer arg that is supposed to point at something, actually points to something. 
    if(p == nullptr) return 0; // if the pointer is nullptr, just return 
    int count = 0; 
    for( ; *p!=0; ++p ){ // assumes that char* is a C-style 0 terminated string, keep crunching till we find the 0 basically 
        if(*p==x){
            ++count; 
        }
    }
    // count the number of occurances of x in char p[]
    return count; 
}

int main(){

    return 0;
}


















