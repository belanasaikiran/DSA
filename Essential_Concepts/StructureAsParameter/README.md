## Structure as a parameter:

1. Method: Call by value:

   ```
   int area(struct Rectangle r1){ // call by value
       return r1.length * r1.width;

       // If I make changes here, it will not affect the original Rectangle r.

   }

   int main(){
       struct Rectangle r={10,5};
       printf("%d",area(r));
   }
   ```

2. Method: Call by reference;

   ```
   int area(struct Rectangle &r1){ // call by reference
        r1.length++;
       return r1.length * r1.width;

       // If I make changes here, it will affect the original Rectangle r.
   }
   int main(){
       ---
       ---
   }
   ```

3) Method: Call by Address:

   ```
   void changeLength(struct Rectangle *p, int l){
       p->length = l; // accessing the address of the structure

   }

   int main(){
       struct Rectangle r={10,5};
       changeLength(&r, 20);
   }
   ```

> The main function acts as a manager and assigns work to functions.

---

### Array as a data member and an extra parameter in structure:

```
void fun(struct test t1){
    t1.A[0] = 10;
    t1.A[1] = 9;
}

int main(0{
    struct Test t={{2,4,6,8,10}, 5};
    fun(t);
})
```
