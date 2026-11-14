// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main()
{
    int n, arr[100];
    int seen[1001] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        if (seen[arr[i]] == 1)
        {
            printf("%d", arr[i]);
            return 0;
        }

        seen[arr[i]] = 1;
    }

    return 0;
}
