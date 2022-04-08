#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
} std;
int main()
{
    //Type Def Syntax:
    // typedef <previous_name> <alias_name>;
    typedef unsigned long ul;
    ul l1;
    // int *a, b;               // It will only make 'a' as a pointer and make 'b' an interger.
    // typedef int *intPointer; // We have make an integer pointer.
    // intPointer a, b;         // This make both 'a' and 'b' as Pointers.
    //struct Student darshika, karishma;
    std darshika, karishma;
    darshika.id = 1;
    karishma.id = 2;
    printf("Darshika's ID is %d\n", darshika.id);
    return 0; 
}