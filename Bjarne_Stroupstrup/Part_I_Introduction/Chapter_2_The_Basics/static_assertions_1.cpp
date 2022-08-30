#include <iostream> 

int main(){



    static_assert(4 <= sizeof(int), "integers are too small sizeof(int) <= 4");

    return 0; 
}