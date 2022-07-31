#include <iostream>
#include <stdio.h>
#include <stdlib.h>

// C++

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // 1.
    Rectangle r = {10, 5}; // in C++, you don't need to mention Struct - it's not mandatory
    cout << r.length << endl;
    cout << r.breadth << endl;

    // Pointer
    Rectangle *p = &r;
    // dot operator cannot be used when you have pointer, use arrow
    cout << p->length << endl;
    cout << p->breadth << endl;

    // 2nd Method
    // Easier way to declare
    cout << "Redeclare" << endl;
    Rectangle *a;
    a = new Rectangle;

    a->length = 15;
    a->breadth = 10;

    cout << a->length << endl;
    cout << a->breadth << endl;

    return 0;
}