// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int last[256];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; i < 256; i++)
        last[i] = -1;

    int start = 0;
    int maxLength = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        unsigned char ch = s[i];

        if (last[ch] >= start)
            start = last[ch] + 1;

        last[ch] = i;

        int length = i - start + 1;

        if (length > maxLength)
            maxLength = length;
    }

    printf("%d", maxLength);

    return 0;
}
