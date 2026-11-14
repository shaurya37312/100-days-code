// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main()
{
    FILE *fp;
    int number;
    int count = 0;
    int sum = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    while (fscanf(fp, "%d", &number) == 1)
    {
        sum += number;
        count++;
    }

    fclose(fp);

    if (count == 0)
    {
        printf("Sum = 0\n");
        printf("Average = 0.00");
        return 0;
    }

    average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}
