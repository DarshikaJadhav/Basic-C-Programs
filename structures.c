#include <stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
};
int main()
{
    struct Student darshika, priya, karishma;
    darshika.id = 1;
    karishma.id = 2;
    priya.id = 3;
    darshika.marks = 99;
    karishma.marks = 98;
    priya.marks = 97;
    darshika.fav_char = 'd';
    karishma.fav_char = 'k';
    priya.fav_char = 'p';
    printf("Marks obtained by Darshika is %d\n", darshika.marks);
    printf("%d",sizeof(float));
   

        return 0;
}