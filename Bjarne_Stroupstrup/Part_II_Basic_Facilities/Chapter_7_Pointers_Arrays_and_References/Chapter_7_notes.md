**7.1 Introduction** We could refer to an object by name, but most objects 'have identity'

*This means they reside at a specific location in memory. (How is it possible for an object not to have a specific memory location?)*

**7.2 Pointers** The fundamental operation on a pointer is dereferencing. This is when you apply the dereference operator to a pointer, and it yeilds the thing that it points to. 

```
{
    char c { 'c' };
    char* cptr { &c };
    // *cptr yield the object to which cptr points 
    cout << *cptr << '\n';  
}
```

Dereferencing is also called ***indirection***. 

In a declaration, * is used to indicate the var is a pointer. Example
```
{
    int *num_ptr { nullptr }; 

}
```
***Pointer to arrays and pointers to functions require more complex notation***
```
{
    int *pi; // pointer to an int

    char **ppc; // pointer to pointer to char 
    
    int *ap[15]; // array of 15 pointers to ints
    
    int (*fp)(char*); // pointer to function taking a char* arg, returning an int 

    // what if I want a pointer to an array of char
    int (*arr_of_char[]) { new char[size] }
    
    int *f(char*); // function taking a char* argument, returning an int
}
```
**7.2.1 void*** 
Sometimes you need to pass or store along an address of a memory location without knowing what type of object is stored there. 




