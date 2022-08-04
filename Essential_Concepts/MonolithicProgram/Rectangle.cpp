
// Mix of C & C++

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int length = 0, breadth = 0; // it's a good practice to initialize variables

    printf("Enter Length & Breadth \n");
    ;
    cin >> length >> breadth;

    int area = length * breadth;       // area of rectangle
    int peri = 2 * (length + breadth); // perimeter of rectangle.

    // Print Area & Perimeter
    printf("Area=%d\nPerimeter=%d\n", area, peri);

    return 0;
}