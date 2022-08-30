// declarations for Vector

class Vector { 
public: 
    Vector(int);
    double& operator[](int);
    int size();
private: 
    double* elem; 
    int sz;
};