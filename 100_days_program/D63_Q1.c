// Write a C program to find the length of a string using a pointer.

#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int length = 0;

    scanf("%99s", str);

    ptr = str;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("%d", length);

    return 0;
}
