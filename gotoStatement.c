//GOTO Statements is also known as Jump statements
#include<stdio.h>
int main(){
    // label:
    //     printf("Testing Label.\t");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("End");
    int num;
    for(int i=0;i<=10;i++){
        printf("%d",i);
        for(int j=0;j<=10;j++){
            printf("\nEnter a Number (Press 0 to Exit): ");
            scanf("%d",&num);
            if(num==0){
                goto end;
            }
        }
    }
    end:
    return 0;
}