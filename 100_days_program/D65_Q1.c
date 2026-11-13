// Write a C program to store and display details of multiple students using an array of structures.

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i].roll);
        scanf("%49s", s[i].name);
        scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %s %.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }

    return 0;
}
