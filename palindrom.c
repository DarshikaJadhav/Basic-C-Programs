#include<stdio.h>
#include<stdlib.h>
int isPalindrome(int num){
    int cnum=num, rem, newNum=0;
    while(cnum!=0){
        rem=cnum%10;
        newNum=(newNum*10)+rem;
        cnum=cnum/10;
    }
    if(newNum==num){
        printf("The given number is Palindrome!");
    }
    else{
        printf("The given number is not palindrome!");
    }
}
int main()
{   
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    isPalindrome(n);
    return 0;
}