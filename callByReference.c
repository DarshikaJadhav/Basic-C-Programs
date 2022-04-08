#include <stdio.h>
void swap(int *a, int *b)
{
    int add, sub, A, B;
    A = *a;
    B = *b;
    add = A + B;
    sub = A - B;
    *a=add;
    *b=sub;
}
int main()
{
    int a, b;
    printf("Enter 'a': ");
    scanf("%d", &a);
    printf("Enter 'b': ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("The value of 'a' & 'b' now: %d & %d",a,b);
    //printf("%d %d",a,b);
    return 0;
}