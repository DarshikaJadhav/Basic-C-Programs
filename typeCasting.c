#include<stdio.h>
int main(){
    int a=3;
    float b=54;
    printf("The value of a is %d",a);
    printf("\nThe value of b is %f",b);
    printf("\nAfter Typecasting.");
    printf("\nThe value of a is %f",(float)a);
    printf("\nThe value of b is %d",(int)b);
    float c=(float)56/3;
    printf("\nThe value of c is %f",c);
    return 0;
}