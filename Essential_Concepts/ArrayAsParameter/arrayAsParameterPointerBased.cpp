#include <iostream>
#include <stdio.h>

using namespace std;

/*
void fun(int *A, int n) // NOTE:  Arrays are always passed as Address
{
    //  we can change the actual array when passed by address
    A[0] = 15; // changes the actual data when this function is used
}

int main()
{
    int A[] = {2, 4, 6, 8, 10};
    int n = 5;
    fun(A, n);
    for (int x : A) // for each loop
        cout << x << " ";

    return 0;
}

*/

//  Pointer based declaration:

// [] are not supported by all compilers, we use *

int *fun(int size)
{
    int *p;
    p = new int[size]; // creating an array in heap

    for (int i = 0; i < size; i++)
        p[i] = i + 1; // initialize array

    return p;
}

int main()
{
    int *ptr, sz = 8; // create pointer and size sz

    ptr = fun(sz); // calling the fun and taking the result in 'ptr'

    for (int i = 0; i < sz; i++)
        cout << ptr[i] << endl;

    return 0;
}

/*
1. Here we don't have an array in main func
2.  the function 'fun' is creating the array not the below loop.
*/