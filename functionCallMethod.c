#include <stdio.h>
void changeValue(int *address)
{
    *address = 345;
}
int sum(int a, int b){
    return a+b;}
int main()
{
    int a = 34, b = 56;
    printf("The value 'a' is %d\n", a);
    printf("The value 'b' is %d\n", b);
    //Call by Value
    int s=sum(a,b);
    printf("Sum of 'a' & 'b' is %d\n",s);
    //Call by Reference
    changeValue(&a);
    printf("Now the value 'a' is %d\n", a);
    return 0;
}