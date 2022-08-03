// practice

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Call by Address
struct Rectangle
{
    int length, breadth;
};

// the below function modifies length in main function
void fun(struct Rectangle *rect)
{
    rect->length = 20; // variable of type structure, so we use 'dot' operator.

    cout << "Length " << rect->length << endl
         << "Breadth " << rect->breadth << endl;
};

int main()
{
    struct Rectangle r = {10, 5};
    fun(&r);

    printf("length %d \nBreadth %d\n", r.length, r.breadth);

    return 0;
}