// Write a C program to store and display student details using a structure.

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    scanf("%d", &s.roll);
    scanf("%49s", s.name);
    scanf("%f", &s.marks);

    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
