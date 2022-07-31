## Pointer to a structure

> Let's see how to use a pointer to a structure.

[]: # Language: c++
[]: # Path: PointerToStructure/PointerToStructure.cpp

```
struct Rectangle {
    int length;
    int breadth;
};


int main(){
    struct Rectangle r={10,20};
    struct Rectangle *p=&r;

    // How to access the members of the structure


    r.length=100;

    //Pointer can be declared in two ways:
    (*p).length=15;
    //or
    p->length=15; // This is the preferred way.

}

```

## Dynamic memory allocation for Pointer to Structure

    []: # Language: c
    []: # Path: PointerToStructure/dynamic_memory_allocation.c

    ```
    struct Rectangle {
    int length;
    int breadth;
    };

    int main(){
    struct Rectangle *p; //pointer to a structure


    // Variable of type structure to get memory heap using 'malloc'
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=10;
    p->breadth=20;
    }
    ```
