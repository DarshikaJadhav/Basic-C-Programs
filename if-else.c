#include<stdio.h>
int main(){
    
    char maths, science, y, n;
    
    printf("Have you Passes your Maths Exam?(y/n) : ");
    scanf("%c",&maths);
    printf("\nHave you Passes your Science Exam?(y/n) : ");
    scanf(" %c",&science);
    

    if(maths=='y' && science=='y')
    {
        printf("\nCongrats! You have cleared both of your exams!\nYou won 45Rs!!");
    }
    else if(maths=='n' && science=='y')
    {
        printf("Congrats! You have to pass Science Exams and won 20Rs!");
    }
     else if(maths=='y' && science=='n')
    {
        printf("Congrats! You have to pass Maths Exams and won 20Rs!");
    }
    else{
        printf("\nSorry! But you have to pass atleast one exam!");
    }
    return 0;
}