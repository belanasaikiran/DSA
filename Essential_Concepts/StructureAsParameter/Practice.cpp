// practice

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Call by Value
struct Rectangle
{
    int length, breadth;
};

// the below function does not modify length in main function
void fun(struct Rectangle rect)
{
    rect.length = 20; // variable of type structure, so we use 'dot' operator.
                      // length is only changed here, not in main()

    cout << "Length " << rect.length << endl
         << "Breadth " << rect.breadth << endl;
};

int main()
{
    struct Rectangle r = {10, 5};
    fun(r);

    printf("length %d \nBreadth %d\n", r.length, r.breadth);

    return 0;
}