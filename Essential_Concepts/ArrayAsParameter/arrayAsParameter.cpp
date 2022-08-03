#include <iostream>
#include <stdio.h>

using namespace std;

void fun(int A[], int n) // NOTE:  Arrays are always passed as Address
{

    // cout << "gives pointer size only for array size " << sizeof(A) << endl;

    // cout << sizeof(A) / sizeof(int) << endl; // To get the length of array

    // pointer is taking 8  bytes and integer is taking 4 bytes. SO the result is 2.

    // FOR EACH cannot be used on a pointer -> for loop can be used and they work

    for (int i = 0; i < n; i++)
        cout << A[i] << endl;
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