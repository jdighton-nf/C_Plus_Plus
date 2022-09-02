#include <iostream> 
#include <initializer_list>

// given some class Vector
class Vector {
private:
    double* elem; 
    int sz; 
public:
    Vector(int s) :elem { new double[s] }, sz {s} {
        for(int i=0; i!=s; ++i){
            elem[i] = 0; 
        }
    }
    Vector(std::initializer_list<double> init_list){
        elem ={ new double[init_list.size()]};
        std::copy(init_list.begin(), init_list.end(), elem);
    }
    ~Vector(){ delete[] elem; }
    double& operator[](int i){
        return elem[i];
    };
    int size() const {
        return sz; 
    }; 
};

class Container {
public:
    virtual double& operator[](int) =0;
    virtual int size() const =0; 
    virtual ~Container() {}
};

class Vector_container : public Container{
    Vector v;
public:
    Vector_container(std::initializer_list<double> init_list) : v(init_list) {}
    Vector_container(int s) : v(s) {}
    ~Vector_container() {}

    double& operator[](int i){ return v[i]; }
    int size() const { return v.size(); }
};

void use(Container& c){
    const int sz = c.size();
    for(int i=0; i!=sz; ++i){
        std::cout << c[i] << '\n';
    }
}

void g(){
    // we've tried to intialize with an initializer list but our vector class doesn't support this 
    Vector_container vc {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    use(vc);
}

int main(){
    g(); 
}
