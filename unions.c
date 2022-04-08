#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

union std
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    struct student s1;
    s1.id = 1;
    s1.marks = 90;
    s1.fav_char = 'd';
    strcpy(s1.name, "Darshika");

    union std s2;
    s2.id = 1;
    s2.marks = 90;
    s2.fav_char = 'd';
    strcpy(s2.name, "Darshika"); //The last value will be unchanged in a union.

    printf("By Structure\n");
    printf("ID: %d\n", s1.id);
    printf("Marks: %d\n", s1.marks);
    printf("Fav Char: %c\n", s1.fav_char);
    printf("Name: %s\n", s1.name);

    printf("\n");

    printf("By Union\n");
    printf("ID: %d\n", s2.id);
    printf("Marks: %d\n", s2.marks);
    printf("Fav Char: %c\n", s2.fav_char);
    printf("Name: %s\n", s2.name);

    return 0;
}