#include<stdio.h>
int main(){
    int age;
    printf("Enter You Age:");
    scanf("%d",&age);
    switch(age){
        case 3:
            printf("Age is 3");
            break;
        case 13:
            printf("Age is 13");
            break;
        case 23:
            printf("Age is 23");
            break;
        default:
            printf("Age is not 3, 13 or 23.");
    }
    return 0;
}