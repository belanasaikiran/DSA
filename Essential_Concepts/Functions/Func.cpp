#include <iostream>
#include <stdio.h>

using namespace std;

int add(int a, int b) // a and b are formal parameters and destroyed after the function is used anywhere in main()
{
    int c;
    c = a + b;
    return c; // you must return to get result with type (here we used c to return and declared type as 'int')
    //  you can write void if you don't expect any output.
};

int main()
{
    int num1 = 10;
    int num2 = 15;
    int sum;

    sum = add(num1, num2); // calling add function with variables
    // num1, num2 are actual parameters

    cout << "Sum is " << sum;

    return 0;
};