#include <iostream>

using namespace std;

// Call by Reference:
// NOTE: References are nick names

void swap(int &a, int &b) // parameters should be of type address - not need of pointers here.
{

    int temp;
    temp = a;
    a = b;
    b = temp;
}; // the swap func() may become inline function - depends on compiler

int main()
{
    int num1 = 10, num2 = 15;

    swap(num1, num2); // we don't need to specify address '&' here

    cout << "First number " << num1 << endl;
    cout << "Second number " << num2 << endl;

    return 0;
};

// NOTE:  we can use **pass by reference** in one parameter and  **call by address** in another parameter. C++ supports it