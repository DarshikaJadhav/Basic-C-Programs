#include <stdio.h>
int main()
{
    int a = 23;
    int *ptr = &a; 
    printf("%d\n", a);    //prints 23.
    printf("%d\n", ptr);  //prints the address of a.
    printf("%d\n", &a);   //prints the address of a.
    printf("%d\n", *ptr); //prints 23. (Derefrencing)
    printf("%x\n", ptr);  //prints the address of a in Hexa Decimal.
    printf("%p\n", ptr);  // prints the address of pointer in Hexal Decimal. p refers to pointer's address.
    printf("%p\n", a);
    printf("%p\n", ptr);
    printf("%p\n", &a);
    printf("%p\n", *ptr);

    // NULL POINTER

    int *ptr2 = NULL;
    printf("%d\n", ptr2);  //returns zero
    printf("%p\n", ptr2);  // returns garbage value or zero
    printf("%d\n", *ptr2); // returns nothing
    printf("%p\n", *ptr2); // Gives nothing
    return 0;
}