#include <stdio.h>

void starPattern(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void starPattern2(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int num, choise;
    printf("Enter number of Rows: ");
    scanf("%d", &num);
    printf("Menu:\nPress 1 for Star Pattern\nPress 2 for Reverse Star Pattern\nEnter your choice: ");
    scanf("%d", &choise);
   
        switch (choise)
        {
        case 1:
            printf("\n");
            starPattern(num);
            break;
        case 2:
            printf("\n");
            starPattern2(num);
            break;
        default:
            printf("Invalid Choise! Enter either 0 or 1.");
            break;
        }
    

    return 0;
}