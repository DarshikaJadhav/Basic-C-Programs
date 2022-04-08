#include <stdio.h>
int printarray(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at position %d is %d\n", i, array[i]);
    }
    //array[0]=23; **Very Important** If we change the value of array here then it will reflect in the 'main' function.
    return 0;
}

void ptrarray(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at position %d is %d\n", i, *(ptr + i));
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    printf("By initialising Value:\n");
        printarray(arr);
    printf("By initialising Pointer:\n");
        ptrarray(arr);
    return 0;
}