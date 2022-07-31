#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // int A[5];
    // A[0] = 12;
    // A[1] = 13;
    // A[2] = 14;

    // int A[8] = {2, 4, 5, 7, 8};

    // FOR LOOP
    // for (int i = 0; i < 8; i++)
    // {
    //     cout << A[i] << endl;
    // }

    // FOR EACH LOOP

    // for (int x : A)
    // {
    // cout << x << endl;
    // }

    // cout
    //     << sizeof(A) << endl;
    // cout << A[1] << endl;
    // printf("%d\n", A[9]);

    // Passing Input for Size of Array
    int n;
    cout << "Enter Size" << endl;
    // Input is passed through "cin"
    cin >> n;
    int A[n];
    A[0] = 2;

    // For Each
    for (int x : A)
    {
        cout << x << endl;
    }

    return 0;
}