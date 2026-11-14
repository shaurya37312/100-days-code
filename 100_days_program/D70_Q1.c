// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[500];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (str[0] != '\0')
        str[0] = toupper((unsigned char)str[0]);

    for (int i = 1; str[i] != '\0'; i++)
        str[i] = tolower((unsigned char)str[i]);

    printf("%s", str);

    return 0;
}
