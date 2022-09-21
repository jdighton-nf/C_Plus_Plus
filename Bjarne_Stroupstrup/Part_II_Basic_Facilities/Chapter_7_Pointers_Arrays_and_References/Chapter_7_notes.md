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

Function using void* pointers typically exist at the very lowest level of the sytem, where real hardware resources are manipulated.
Example: 

```
{
    void* my_alloc(size_t n); // allocate n bytes from my special heap  
}
```

**7.2.1 nullptr** 
The literal nullptr represents the null ptr. 

```
{
    int* pi = nullptr; 
    double* pd = nullptr; 
    int i = nullptr; // error: i is not a nullptr 
}
```

Before nullptr was introduced, 0 was used as a notation for the nullptr

**Arrays**
Use them in small scopes for small applications. 
Prefer the better behaved types when possible such as vector, or array. 
DO NOT USE DELETE when something is allocated on the stack. It's a stupid idea. 
Control the lifetime of objects on the heap by using a resource handle like string, vector, or 
unique_ptr 
Often a char* or const char* is expected to point to a zero-terminated sequence of chars. 

7.4.2 Multidimensional Arrays

***Pointers and const*** C++ offers two related meaning of constant. 
consts primary task is to ensure immutability in interfaces 
Declaring a pointer with const makes the object pointed to, not the pointer, immutable. 
A const ptr makes it so you can't write to the object through the pointer, but you can still write to the object if it's within scope. (it won't be)

The declarator operator that makes a constant is *const. There is no const\* declarator type 

```
    *const, meanst the pointer is constant
    const* assumes that the base type is constant, the pointer remains mutable

    char *const cp; // const pointer to char
    char const* pc; // pointer to const char
    const char* pc2; // pointer to const char
```
**7.6 Pointers and Ownership** There is nothing in the type system to distinguish a pointer that owns a resource from one that does not. 

If you create a pointer to look at a local int, then you delete that pointer. The failure mode in undefined.
Sometimes it'll throw a munmap_chunk() exception, other times you'll have a segfault 

**.7 References ** A pointer allows us to pass around potentially large amounts of data a low cost. Instead of copying we just pass a pointer. Using pointers differs from using the object name in a few ways. 
With a pointer:
```
*p instead of, obj, and p-> rather than obj.m
```
Pointers require us to be more carefully than using objects directly. 
A **Reference** is an an alias for an object. It's usually implemented to hold hold a machine address of an object, and does not impose performance overhead compares to pointers but they differ from pointers in a few ways. 
You access a reference with the same syntax as the name of an object. 
A reference always refers to the object it was initialized againts. 
There is no 'null reference' 

The main use for reference is for specifying args and returns for functions, and for operator overloads. 

**7.7.1 Lvalue references** 
You can think of a reference as being automatically dereferenced each time it's used. The address portion is isolated from us unlike with a pointer. A reference is NOT an object that can be manipulated like a pointer is. 
Initialization of a ref is trivial is the object is an Lvalue (an object you can take the address of)

```
T&          //must be an lvalue of type T
const T&    // does not need to be an lvalue of type T

double& dr = 1; // an int (1) is not a double
                // 1) it is implictly converted to a double
                // 2) the resulting value is placed in a temp variable of type T
                // 3) the temp var is used as the value of the initializer
```

**7.7.2 Rvalue References**

An Rvalue refernce refers to a temporary object which the user of the object can (and will) modify, assuming that the reference will never be used again. 
We want to know if a reference refers to a temp object, because if it does we can sometimes turn an expensive copy operation into a cheap move operation. 
You can move a huge amount of information cheaply, if you are sure that the source isn't going to be used again. 

*An Rvalue reference can bind to an Rvalue but not to an Lvalue* 
