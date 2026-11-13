// Write a C program to find the maximum element in an array using pointers.

#include <stdio.h>

int main()
{
    int n, a[100];
    int *ptr, max;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ptr = a;
    max = *ptr;

    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) > max)
            max = *(ptr + i);
    }

    printf("%d", max);

    return 0;
}
