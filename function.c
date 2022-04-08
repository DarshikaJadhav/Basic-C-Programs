#include<stdio.h>
int sum(int a, int b){
    return a+b;
}

int main(){

    int a,b,c;
    a=3;
    b=6;
    c=sum(a,b);
    printf("Sum is %d",c);
    return 0;
}