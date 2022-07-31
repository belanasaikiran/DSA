#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a = 10;

    // Declarations and  Initialization of Reference with '&' to variable 'a'
    int &r = a;

    // Note: You cannot change the reference assigned to a variable
    cout << "Before" << endl;
    cout << a << endl
         << r << endl;

    r = 25;
    cout << "After" << endl;
    cout << a << endl
         << r << endl;

    return 0;
}