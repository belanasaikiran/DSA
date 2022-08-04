
// Mix of C & C++

#include <iostream>
#include <stdio.h>

using namespace std;

// Converting Monolithic program to Modular program.
// We break main function to smaller functions:

// AREA
int area(int length, int breadth)
{
    return length * breadth;
}

// PERIMETER
int peri(int length, int breadth)
{
    int p;
    p = 2 * (length + breadth);

    return p;
}

int main()
{
    int length = 0, breadth = 0;

    printf("Enter Length & Breadth\n");
    cin >> length >> breadth; // input uses '>>'
    int a = area(length, breadth);
    int p = peri(length, breadth);

    printf("Area=%d\nperimeter=%d\n", a, p);

    return 0;
}