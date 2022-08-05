#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// Initialise Function -- is required
void initialise(struct Rectangle *r, int l, int b)
{
    r->length = l; // so we can use l and b in main function
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
};

int perimeter(Rectangle r) // In C++, In don't need to specify structure here for declarations
{
    int p;
    p = 2 * (r.length + r.breadth);

    return p;
};

int main()
{
    Rectangle r = {0, 0};

    int l, b;
    printf("Enter Length & Breadth\n");
    cin >> l >> b;

    // initialise
    initialise(&r, l, b);

    int a = area(r);
    cout << a << endl;
    int peri = perimeter(r);
    cout << peri << endl;

    return 0;
}