// Write a C program to find the sum of array elements using pointers.

#include <stdio.h>

int main()
{
    int n, a[100];
    int *ptr;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ptr = a;

    for (int i = 0; i < n; i++)
        sum += *(ptr + i);

    printf("%d", sum);

    return 0;
}
