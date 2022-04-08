#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = NULL;
    printf("The address of a is %d\n",ptr);// This will give 0
    printf("The address of a is %d\n"*ptr); // This will give an error
    return 0;
}