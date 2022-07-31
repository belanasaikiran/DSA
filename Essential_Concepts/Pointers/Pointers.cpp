//  Why Pointers?
// A. Pointer is an address variable for storing address of data.
// for Accessing data indirectly

// Pointer is used to access HEAP memory(which is outside the program)
// Example: An Array data, keyboard, Monitor, etc, Resources and passing parameters

// Declaration
// data variable -> int a=10;
// Address variable  ->  int *p;

// Initialization
// p = &a; -> has the address of the variable

// Accessing
// printf("%d", a); - 10

// Dereferencing
// printf("%d", *p);

// Dynamic Allocation

// EXAMPLE:

#include <stdio.h>

int main()
{
    int *p; // Variable is Declared  in stack only - always

    // In C Language, we use Malloc function
    // p = (int *)malloc(5 * sizeof(int)); // to get memory heap -> Create an array of 5 integers in heap memory

    //  In C++
    p = new int[5];
}
