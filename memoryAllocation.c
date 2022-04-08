#include <stdio.h>
#include <stdlib.h>

int main()
{
    //USE OF MALLOC();
    int *ptr;
    int n, num;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    //ptr = (int *)malloc(n * sizeof(int));
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the number of elements you want in the array: ");
    scanf("%d",&num);
    for(int i = 0; i<num; i++){
        printf("Enter a Number at Position %d in the array: ",i);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(int i = 0; i<n; i++){
        printf("The value at position %d of the array is %d\n",i,ptr[i]);
        printf("The address of the value at position %d of the array is %d\n",i,&ptr[i]);
    }
    return 0;
}