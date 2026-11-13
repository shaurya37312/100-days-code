// Write a C program to demonstrate the use of a union.

#include <stdio.h>

union Data
{
    int integer;
    float decimal;
    char character;
};

int main()
{
    union Data data;

    data.integer = 25;
    printf("Integer: %d\n", data.integer);

    data.decimal = 15.5;
    printf("Float: %.2f\n", data.decimal);

    data.character = 'A';
    printf("Character: %c\n", data.character);

    return 0;
}
