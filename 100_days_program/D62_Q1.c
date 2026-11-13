// Write a C program to reverse an array using pointers.

#include <stdio.h>

int main()
{
    int n, a[100];
    int *start, *end, temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    start = a;
    end = a + n - 1;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
