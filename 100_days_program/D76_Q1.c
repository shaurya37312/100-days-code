// Write a C program to find the transpose of a matrix.

#include <stdio.h>

int main()
{
    int rows, cols;
    int a[10][10];

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    }

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            printf("%d ", a[j][i]);

        printf("\n");
    }

    return 0;
}
