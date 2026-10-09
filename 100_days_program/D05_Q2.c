// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() 
{
    int total, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &total);
    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
