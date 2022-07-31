#include <iostream>

using namespace std;

// Call by Address:

void swap(int *a, int *b) // parameters should be of type pointers
{

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
};

int main()
{
    int num1 = 10;
    int num2 = 15;
    int sum;

    cout << "Before: \n "
         << "first number is " << num1 << " \n second number is  " << num2;

    swap(&num1, &num2); // we access via address of function

    cout << "\nAfter: \n ";
    cout << "First number " << num1 << endl;
    cout << " Second number " << num2 << endl;

    return 0;
};

// Call by Address use-cases:
// 1. To get more results from function, we use **pass by address**.
// 2. If you have a variable and the same variable has to be modified, then we use **pass by address**. - In structure based or object based variables
