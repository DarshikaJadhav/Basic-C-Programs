#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array:", i);
        scanf("%d", &marks[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d.\n", i, marks[i]);
    }
    // marks[0]=34;
    // marks[4]={23,45,35,34}
    // printf("Marks of Student 4 is %d",marks[0]);
    return 0;
}
