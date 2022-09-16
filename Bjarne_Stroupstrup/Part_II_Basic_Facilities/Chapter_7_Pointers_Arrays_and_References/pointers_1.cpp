#include <iostream>

int main(){

    int sz { sizeof(char) * 5 };
    char *arr_of_char { new char[sz] };

    *arr_of_char[0] = 'd';
    *arr_of_char[1] = 'g';

    return 0; 
}