// Write a C program to dynamically allocate memory for n integers using calloc() and display the elements.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;

    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Initial values:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter values:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Entered values:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
