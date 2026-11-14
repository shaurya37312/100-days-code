// Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main()
{
    int m, n;
    int a[100], b[100], merged[200];
    int i = 0, j = 0, k = 0;

    scanf("%d", &m);

    for (int x = 0; x < m; x++)
        scanf("%d", &a[x]);

    scanf("%d", &n);

    for (int x = 0; x < n; x++)
        scanf("%d", &b[x]);

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    while (i < m)
        merged[k++] = a[i++];

    while (j < n)
        merged[k++] = b[j++];

    for (i = 0; i < k; i++)
    {
        printf("%d", merged[i]);

        if (i < k - 1)
            printf(" ");
    }

    return 0;
}
