#include <iostream>
#include <stdio.h>

using namespace std;

// 1. Definition -  Defining a Structure
struct Rectangle
{
    int length;  // takes 4 bytes
    int breadth; // takes 4 bytes of space
};

int main()
{
    // 3. Declaring the Structure and Initialization of structure with values
    struct Rectangle r1 = {10, 15};

    // r1.length *r1.breadth;

    // 2. size of Structure
    printf("%lu", sizeof(r1)); // C language way

    // 4. Accessing the members of struct
    cout << r1.length << endl;  // prints length
    cout << r1.breadth << endl; // prints breadth

    return 0;
}