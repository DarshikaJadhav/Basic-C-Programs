#include<stdio.h>
int main(){
    int num,i=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    do{
        printf("%d\n",i+1);
        ++i;
    }
    while(i<num);
    
    return 0;
}