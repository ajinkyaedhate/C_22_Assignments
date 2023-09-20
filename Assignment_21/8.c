// 8. Write a program to store information of 10 students and display them using structure.
struct student
{
    char name[20];
    int rollno;
};

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct student s[3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("Enter name and rollno of student %d:\n", i + 1);
        fflush(stdin);
        fgets(s[i].name, 20, stdin);
        scanf("%d", &s[i].rollno);
    }
    for (i = 0; i < 3; i++)
    {
        printf("Name %d: %sRollno: %d\n\n", i + 1, s[i].name, s[i].rollno);
    }

    return 0;
}