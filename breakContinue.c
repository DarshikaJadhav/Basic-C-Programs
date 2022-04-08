#include<stdio.h>
int main(){
    int i, age;
    for(i=0;i<10;i++){
        printf("%d\nEnter your Age: ",i);
        scanf("%d",&age);
        /*if(age>10)
        {
            break;
        }*/
        if(age>10){
            continue;
        }
        printf("We have not come across any continue statements\n");
        printf("We have not come across any continue statements\n");
        printf("We have not come across any continue statements\n");
        printf("Test for Continue Statement.\n");
    }
    return 0;
}  