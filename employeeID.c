#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int numID, lenID;
    char *id;
    printf("Enter the number of Employs: ");
    scanf("%d", &numID);

    for (int i = 0; i < numID; i++)
    {
        printf("\n");
        printf("For Employee %d:\n", i + 1);
        printf("Enter the Length of your ID: ");
        scanf("%d", &lenID);
        id = (char *)malloc((lenID + 1) * sizeof(char));
        printf("Enter your ID: ");
        scanf("%s", id);
        printf("ID for Employee %d is %s\n", i + 1, id);
        printf("\n");
        free(id);
    }

    return 0;
}