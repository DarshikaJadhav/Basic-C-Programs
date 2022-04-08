#include <stdio.h>
int b=34; //Global Variable
int fun(int b1)
{ 
    static int myvar = 0;
    printf("The Value of 'myvar' is %d\n",myvar);
    myvar++;
    int n=myvar+b1;
    printf("The Value of 'b+myvar' is %d\n",n);
    // printf("The value of 'b' inside function 'fun' is %d\n",b);
    // printf("The address of 'b' inside function 'fun' is %d\n",&b);
    return b * 10;
}
int main()
{
    int b = 344;
    // printf("The value of 'b' inside main function is %d\n",b);
    // printf("The address of 'b' inside function 'fun' is %d\n",&b);
    int val = fun(3);
    int val2=fun(3);
      
    int *ptr = &val;
    // printf("The value of fun is %d", val);
    return 0;
}