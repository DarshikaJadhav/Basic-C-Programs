#include <stdio.h>
#include <string.h>
void parser(char *S)
{   int j;
    int n = strlen(S);
    int start = 0, end = 0;
    for (int i = 0; i < n; i++)
    {
        if (S[i] == '>')
        {
            start = i + 1;
            break;
        }
    }
    while (S[start] == ' ')
    {
        start++;
    }
    for (int i = start; i < n; i++)
    {
        if (S[i] == '<')
        {
            end = i - 1;
            break;
        }
    }
    while (S[end] == ' ')
    {
        end--;
    }
    for (int i = start; i <= end; i++)
    {
        printf("%c", S[i]);
    }
    printf("\n");
    printf("The lenght of Parsed Statement is %d\n",end-start+1);
}
int main()
{
    char string[] = "  <h1>     Hey! My name is Darshika Jadhav.   <  h1  >     ";
    printf("Statement:\n");
    printf("%s\n",string);
    printf("The lenght of Statement is %d\n",strlen(string));
    //printf("Enter a HTML Statement:\n");
    //gets(string);
    //printf("Statement: %s",string);
    //puts(string);
    printf("Parsed Statement:\n");
    parser(string);
    //printf("%s\n",string);
    // char stv[]="  <h1>     Hey! My name is Darshika Jadhav.   <  h1  >     ";
    // printf("%d",strlen(stv));
    return 0;
}