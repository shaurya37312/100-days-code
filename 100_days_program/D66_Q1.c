// Write a C program to find the employee with the highest salary using structures.

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n, maxIndex = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &e[i].id);
        scanf("%49s", e[i].name);
        scanf("%f", &e[i].salary);
    }

    for (int i = 1; i < n; i++)
    {
        if (e[i].salary > e[maxIndex].salary)
            maxIndex = i;
    }

    printf("ID: %d\n", e[maxIndex].id);
    printf("Name: %s\n", e[maxIndex].name);
    printf("Salary: %.2f\n", e[maxIndex].salary);

    return 0;
}
