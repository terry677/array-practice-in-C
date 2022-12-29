#include <stdio.h>

/**
 * main - Matrix Addition
 *
 * Description : A program that adds two matrices together.
 *
 * return 0 alway success
 */

int main()
{
    int Arow, Acol, Brow, Bcol, i, j, sum;
    // inputting order of Matrix A
    printf("Enter the number of rows of Matrix A: \n");
    scanf("%d", &Arow);

    printf("Enter the number of columns of Matrix A: \n");
    scanf("%d", &Acol);

    // declearing Matrix A
    int a[Arow][Acol];

    // initializing the Matrix
    printf("Enter the element of the matrix A: \n");
    for (i = 0; i < Arow; i++)
    {
        for (j = 0; j < Acol; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // printing the Matrix A
    printf("The Matrix A is\n");
    for (i = 0; i < Arow; i++)
    {
        for (j = 0; j < Acol; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // inputting order of Matrix B
    printf("Enter the number of rows of Matrix B:\n");
    scanf("%d", &Brow);

    printf("Enter the number of columns of Matrix B: \n");
    scanf("%d", &Bcol);

    // declearing Matrix A
    int b[Brow][Bcol];

    // initializing the Matrix
    printf("Enter the element of the matrix B: \n");
    for (i = 0; i < Brow; i++)
    {
        for (j = 0; j < Bcol; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // printing the Matrix B
    printf("The Matrix B is\n");
    for (i = 0; i < Brow; i++)
    {
        for (j = 0; j < Bcol; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    int c[Arow][Bcol];

    if (Arow == Brow && Acol == Bcol)
    {
        // suming both matrix A and B
        for (i = 0; i < Arow; i++)
        {
            for (j = 0; j < Acol; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        // printing matrix C
        printf("The matrix C is \n");
        for (i = 0; i < Arow; i++)
        {
            for (j = 0; j < Acol; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Can not add matrix of different order!");
    }

    return 0;
}