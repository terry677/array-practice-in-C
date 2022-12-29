#include <stdio.h>

/***
 * main - A program that prints the Transpose of a matrice
 * Description : Transpose of a matrix is turning row to columns and columns to rows.
 *
 * return 0 always success.
 */

int main()
{
    int nRow, nCol, i, j;
    printf("Enter the number of row:\n");
    scanf("%d", &nRow);

    printf("Enter the number of columns: \n");
    scanf("%d", &nCol);

    int a[nRow][nCol];

    // inputting element of the matrix
    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < nRow; i++)
    {
        for (j = 0; j < nCol; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // printing matrix

    for (i = 0; i < nRow; i++)
    {
        for (j = 0; j < nCol; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Transposing the matrix
    printf("The Transpose of the matrix is: \n");
    for (i = 0; i < nCol; i++)
    {
        for (j = 0; j < nRow; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}