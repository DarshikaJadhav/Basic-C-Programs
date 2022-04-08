#include <stdio.h>
// int fib(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     else
//     {
//         return fib(n - 1) + fib(n - 2);
//     }
// }
int fib_iterative(int num){
    int i, first = 0, second = 1, next;
    for (i = 0; i < num-1; i++)
    {
        if (i <= 1)
        {
            next = i;
        }

        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("Fibonacci Series of %d: \n",n);
    printf("%d",fib_iterative(n));
    return 0;
}