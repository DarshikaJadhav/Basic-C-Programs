#include <stdio.h>
int main()
{
    int a = 34;
    int *ptra = &a;
    printf("Integer Pointer Arithmetic\n");
    printf("%d\n", ptra); // prints the address of variable a.
    printf("%d\n", ptra + 1); // return the next memory address of variable a.
    printf("%d\n", ptra - 1); // return the previous memory address of variable a.

    char c = '3';
    char *ptrc = &c;
    printf("\n Character Pointer Arithmetic\n");
    printf("%d\n", ptrc);     // prints the address of variable a.
    printf("%d\n", ptrc + 1); // return the next memory address of variable a.
    printf("%d\n", ptrc - 1); // return the previous memory address of variable a.
    return 0;
}