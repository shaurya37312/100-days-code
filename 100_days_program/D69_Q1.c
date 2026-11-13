// Write a C program to dynamically allocate memory for n integers using malloc() and find their sum.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;
    int sum = 0;

    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
        sum += arr[i];

    printf("%d", sum);

    free(arr);

    return 0;
}
