#include<stdio.h>
#include "Intro.c"

//int sum=0; //Global Variable
int myfunc(int a, int b){
    //int sum=a+b;
    static int fun;
    fun++;
    printf("Static Int %d\n",fun);
    //return sum;
}
int main()
{
    // int sum=myfunc(3,5);
    myfunc(3,5);
    myfunc(3,5);
    myfunc(3,5);
    myfunc(3,5);
    myfunc(3,5);
    myfunc(3,5);
    //int sum = 45;
    // printf("THe Sum is %d",sum);
    return 0;
}