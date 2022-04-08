#include<stdio.h>
int main()
{
    int a=354;
    float b=8.3;
    void *ptr;
    ptr=&a;
    //printf("The value of a is %d\n",*ptr); //This will give an error as ptr is void Pointer so it is not define by any type.
    printf("The value of a is %d\n",*(int*)ptr);
    ptr=&b; //Here we can store any type of address in ptr as it is a void pointer
    printf("The value of a is %f\n",*(float*)ptr);
    return 0;
}