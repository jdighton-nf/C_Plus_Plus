#include <iostream> 
#include <string> 
using std::string;  

struct Address {
    string name;
    int number; 
    string street;
    string town; 
    char state[2];
    char zip[5];
    Address(const string& n, int nu, const string& s, const string& t, const string& st, int z);

};

Address::Address(const string& n, int nu, const string& s, const string& t, const string& st, int z)
    :name{n}, number{nu}, street{s}, town{s}
{
    if(st.size()!=2) std::cout << "state format error" << '\n'; 
    state = {st[0], st[1]}; 
    std::ostringstream ost; 
    ost << z; 
    string zi { ost.str() };
    switch(zi.size()){
        case 5:
            zip = {zi[0], zi[1], zi[2], zi[3], zi[4]};
            break;
        case 4:
            zip = {'0', z[0], z[1], z[2], z[3]};
            break;
        default:
            std::cout << "zip format error" << '\n'; 
    }

}


int main(){

    Address jd = {
        "Jim Dandy", 61, "South Street", "New Providence", "NJ", 7974
    }; 

    return 0;
}