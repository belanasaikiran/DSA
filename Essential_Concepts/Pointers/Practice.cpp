#include <iostream>
#include <stdio.h> //for C code usage too

using namespace std;

int main()
{

    int a = 10;

    // Declaring the pointer
    int *p;

    // Assining address for pointer
    p = &a;

    cout << a;
    // C Lang
    printf("using pointer %d %d", p); // *p - dereferrencing

    return 0;
}
