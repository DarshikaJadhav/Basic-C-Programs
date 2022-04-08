#include <stdio.h>
void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 6/ 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
    }
}
void arrayPrint(int arr[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int a = sizeof(arr);
    int number_of_elements_in_array = a / (sizeof(int));
    printf("Orriginal Array:\n");
    for (int i = 0; i < number_of_elements_in_array; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nNumber of Elements in array = %d", number_of_elements_in_array);
    printf("\nSize of Array: %d\n", a);
    printf("Reversed Array:\n");
    for (int i = number_of_elements_in_array - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\nReversed Array Using Funtion: \n");
    arrayRev(arr);
    arrayPrint(arr);

    // int size = *(&arr + 1) - arr;    // Returns no. of elements in array.
    // printf("%d\n", size);            // Returns no. of elements in array.
    // printf("%d\n", arr);             // Return the address of first element of array.
    // printf("%d\n", &arr);            // Return the address of first element of array.
    // printf("%d\n", &arr + 1);        // Return the address of last element of array.
    // printf("%d\n", *(&arr + 1));     // Return the address of last element of array.
    // printf("%d", *(&arr + 1) - arr); // Returns no. of elements in array.
    return 0;
}