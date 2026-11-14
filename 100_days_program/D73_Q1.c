// Write a C program to sort an array in ascending order using selection sort.

#include <stdio.h>

int main()
{
    int n, a[100], temp, minIndex;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIndex])
                minIndex = j;
        }

        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
