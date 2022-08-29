#include <iostream> 
using namespace std; 

bool accept2(){
    cout << "Proceed? (y/n)\n";
    char answer = 0; 
    cin >> answer; 

    switch(answer){
        case 'y':
            cout << "ok\n";
            return true; 
        case 'n':
            cout << "bye!\n";
            return false; 
        default:
            cout << "Bad input";
            return false; 
    }
}

bool accept3(){
    int tries = 1; 
    while(tries < 4){
        cout << "proceed (y/n)?\n";
        char answer = 0; 
        cin >> answer; 

        switch(answer){
            case 'y':
                return true;
            case 'n':
                return false; 
            default:
                cout << "Bad input";
                ++tries;  
        }

    }
}

int main(){

    accept2(); 

    return 0; 
}