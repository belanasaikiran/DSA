// practice

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length, breadth;
};

// Using pointer with heap memory

// It returns a pointer to a structure:
struct Rectangle *fun()
{
    struct Rectangle *p;
    p = new Rectangle; // C++ declaration

    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); --> C language declaration

    p->length = 15;
    p->breadth = 7;

    return p;
}

int main()
{
    struct Rectangle *ptr = fun();

    cout << "Length " << ptr->length << endl;
    cout << "Breadth" << ptr->breadth << endl;

    return 0;
}