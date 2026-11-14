// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char text[500];

    fp = fopen("data.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
