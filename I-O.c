#include <stdio.h>
//#include<stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[50] = "Hello, Writing my C Programs ";

    //**Reading File**
    // ptr=fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The Content of this File has, %s\n",string);

    //**Writing File**
    //ptr = fopen("myfile.txt", "w"); //Writes from beginning. Delete all the previous data in "myfile.txt" and write the given string.
    ptr = fopen("myfile.txt", "a"); //Appends the string in the existing data in the file.
    fprintf(ptr, "%s", string);
    return 0;
}