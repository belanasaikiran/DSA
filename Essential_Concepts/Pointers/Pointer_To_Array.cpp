// Pointer to an Array

// #include <iostream>
// #include <stdio.h>
// using namespace std;

// int main()
// {

//     // Array is created in stack
//     int A[5] = {2, 4, 6, 8, 10};
//     int *p;
//     p = A; // don't need to use '&A' value which would be syntax error in C++

//     for (int i = 0; i < 5; i++)
//         cout << p[i] << endl;
//     return 0;
// }

// Array creation in HEAP Memory:

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int *p;
    // Initializes pointer and assigning the variable address
    // NOTE:  Memory created in Heap - so, we need to delete the dynamically allocated memory at the end when not in use.
    p = new int[5];
    p[0] = 10;
    p[1] = 15, p[2] = 20;
    p[3] = 25;
    p[4] = 30;

    for (int i = 0; i < 5; i++)
        cout << p[i] << endl;

    // Freeing the memory
    delete[] p;

    // in C Language
    // free(p);

    return 0;
}

// Every pointer takes same amount of memory - latest compilers takes 8 bytes of memory for 64 bit