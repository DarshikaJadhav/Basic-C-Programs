#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="darshika";
    char s2[]="jadhav";
    char s3[50];
    strcpy(s3,s1);
    //puts(strcat(s1,s2)); //It puts the whole value in s1, means after running this s1="darshikajadhav";
    printf("The length of s1 is %d\n",strlen(s1));
    printf("The length of s2 is %d\n",strlen(s2));
    printf("The reverse string s1 is \n");
    puts(strrev(s1));
    printf("The reverse string s2 is %s\n",strrev(s2));
    printf("%s",s3);
    return 0;
}