##REFERENCE:

Available in C++ only.

> A Reference is a nickname given to a variable or a function.

```
int main() {
int a = 10;

    // variable a is called "a"
    //Declaring the reference by adding & in front of the variable name
    int &r=a;

})
```

Note: iF 'a' occupies more than one memory location, then 'r' will refer to the first memory location. hence, 'r' will refer to the value of 'a'.

```
int main() {
int a = 10;

int &r=a;

cout<<a<<endl; //prints 10
cout<<r<<endl; //also prints 10

r++; //increments the value of 'a' by 1
cout<<a<<endl; //prints 11
cout<<r<<endl; //prints 11

}
```

> Note: Reference is used for parameter passing.
