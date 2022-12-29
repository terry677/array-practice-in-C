#include <stdio.h>

/**
 * main - A program that multiplies two Matrix.
 *
 * return 0 always success.
 */

int main()
{
    int Arow, Acol, Brow, Bcol, i, j, k, sum;

    printf("Enter the number of rows for matrix A:\n");
    scanf("%d", &Arow);

    printf("Enter the number of columns for matrix A: \n");
    scanf("%d", &Acol);
    int a[Arow][Acol];

    // entering elements to the matrix A
    printf("Enter the element of the matrix A: \n");
    for (i = 0; i < Arow; i++)
    {
        for (j = 0; j < Acol; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // printing the elements of the matrix A
    printf("The matrix A is\n ");
    for (i = 0; i < Arow; i++)
    {
        for (j = 0; j < Acol; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Data for matrix B

    printf("Enter the number of rows for matrix B:\n");
    scanf("%d", &Brow);

    printf("Enter the number of columns for matrix B: \n");
    scanf("%d", &Bcol);
    int b[Brow][Bcol];

    // entering elements to the matrix A
    printf("Enter the element of the matrix B: \n");
    for (i = 0; i < Brow; i++)
    {
        for (j = 0; j < Bcol; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // printing the elements of the matrix A

    printf("The matrix B is \n");
    for (i = 0; i < Brow; i++)
    {
        for (j = 0; j < Bcol; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // matrix multiplication of A and B
    int c[Arow][Bcol];
    if (Acol == Brow)
    {
        for (i = 0; i < Arow; i++)
        {
            for (j = 0; j < Bcol; j++)
            {
                sum = 0;
                for (k = 0; k < Acol; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
    }

    return 0;
}