// Write a C program to resize a dynamically allocated array using realloc().

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, newSize;
    int *arr;

    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &newSize);

    int *temp = (int *)realloc(arr, newSize * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory allocation failed");
        free(arr);
        return 1;
    }

    arr = temp;

    if (newSize > n)
    {
        for (int i = n; i < newSize; i++)
            scanf("%d", &arr[i]);
    }

    for (int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
