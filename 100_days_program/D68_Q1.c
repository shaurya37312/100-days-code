// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main()
{
    int n, arr[100];
    long long sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    long long expectedSum = (long long)n * (n + 1) / 2;

    printf("%lld", expectedSum - sum);

    return 0;
}
