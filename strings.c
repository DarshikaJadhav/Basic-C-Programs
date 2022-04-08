#include <stdio.h>
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    // char str[] = {'D', 'a', 'r', 's', 'h','i','k','a','\0'};
    // //OR
    // char str2[]="Jadhav";
    // printStr(str);
    // printf(" ");
    // printStr(str2);
    char name[50];
    gets(name);
    printf("Using 'gets':\n%s",name);
    printf("\nUsing 'puts':\n");
    //puts(name);
    printf("Using Custom Function 'printStr':\n");
    printStr(name);
    return 0;
}