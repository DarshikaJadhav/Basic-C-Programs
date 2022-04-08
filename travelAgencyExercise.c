#include <stdio.h>
#include <string.h>
struct driverInfo
{
    char name[50];
    char drivingID[10];
    char route[50];
    int km;
};
int main()
{
    int n;
    printf("Enter the Number of Drivers: ");
    scanf("%d", &n);
    struct driverInfo d[100];
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter details of Driver %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", &d[i].name);
        printf("Enter Driving Lisence Number: ");
        scanf(" %s", &d[i].drivingID);
        printf("Enter the Route: ");
        scanf(" %s", &d[i].route);
        printf("Enter the travelling distance in KM: ");
        scanf(" %d", &d[i].km);
        printf("\n");
    }

    for (int j = 0; j < n; j++)
    {
        printf("\n");
        printf("Information of Driver %d:\n", j + 1);
        printf("Name: %s", d[j].name);
        printf("\t\tDriving Lisence Number: %s", d[j].drivingID);
        printf("\nRoute: %s", d[j].route);
        printf("\t\tTravelling Distance: %d", d[j].km);
        printf("\n");
    }
    printf("\n");
    return 0;
}