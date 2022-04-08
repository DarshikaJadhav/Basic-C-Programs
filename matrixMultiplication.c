#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20][20], b[20][20], mul[20][20];
    int m1, n1, m2, n2;
    int i1, j1, i2, j2, i3, j3, k;
    int sum = 0;
    printf("Enter the number of Rows and Column for Matrix A: ");
    scanf("%d %d", &n1, &m1);
    printf("Enter the number of Rows and Column for Matrix B: ");
    scanf("%d %d", &n2, &m2);

    if (m1 == n2)
    {
        printf("Insert elements in matrix A-\n");
        
        for (i1 =0; i1 <n1; i1++)
        {
            for (int j1 = 0; j1 <m1; j1++)
            {
                printf("Enter A[%d][%d]: ", i1+1, j1+1);
                scanf("%d", &a[i1][j1]);
            }
        }
        
        printf("\n");
        
        printf("Insert elements in matrix B-\n");
        
        for (i2 = 0; i2 < n2; i2++)
        {
            for (j2 = 0; j2 <m2; j2++)
            {
                printf("Enter B[%d][%d]: ", i2+1, j2+1);
                scanf("%d", &b[i2][j2]);
            }
        }

        printf("\n");

        printf("Matrix A-\n");
        
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        printf("Matrix B-\n");
        
        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

        for (i3 = 0; i3 < n1; i3++)
        {
            for (j3 = 0; j3 < m2; j3++)
            {
                for (k = 0; k < m1; k++)
                {
                    sum = sum + a[i3][k] * b[k][j3];
                }
                mul[i3][j3] = sum;
                sum = 0;
            }
        }

        printf("\nThe Multiplication Matrix of the two entered Matrices is:\n");
        
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The given information is not valid.\nFor the multiplication of two matrices (AxB), the no. of Columns of A should be equal to the no. of Rows of B.\nCheck the given Data.\n");
        printf("Your given Data:-\nRow & Column of A = %d, %d\nRow & Column of B = %d, %d\n", m1, n1, m2, n2);
    }
    return 0;
}