#include <stdio.h>
int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * fact(num-1));
    }
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    if(n<=10){
        printf("Factorial of %d is %d", n, fact(n));
    }
    if(n>10 && n<=30){
        printf("Factorial of %d is %ld", n, fact(n));
    }
    else{
         printf("Factorial of %d is %lld", n, fact(n));
    }
   
    return 0;
}