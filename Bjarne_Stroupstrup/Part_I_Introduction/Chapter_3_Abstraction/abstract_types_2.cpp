#include <iostream> 
#include <list>
#include <initializer_list>
#include <stdexcept>

class Container { 
// abstract container, provide ONLY an interface which has to be defined by the classes that extend container
public: 
    virtual double& operator[](int) =0;
    virtual int size() const =0; 
    virtual ~Container() {}
};

class List_container : public Container { 
    std::list<double> ld;
public:
    List_container(){} // empty list - nothing initialized
    List_container(std::initializer_list<double> li) : ld{ li } {} // copy li into ld 
    ~List_container(){}
    double& operator[](int); 
    int size(){ return ld.size() }; 
};

double& List_container::operator[](int i){
    for(auto& x : ld){
        if(i == 0){
            return x;
            --i; 
        }
    }
    throw std::out_of_range("List container");
}

void h(){
    List_container ls = {1, 2, 3, 4, 5, 6, 7, 8, 9};
}

int main(){

    return 0;
}