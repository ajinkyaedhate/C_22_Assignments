// 9. Write a program to store information of n students and display them using structure

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
    int n;
    printf("how many students data you want to enter:");
    scanf("%d",&n);
    struct student s[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("Enter name and rollno of student %d:\n", i + 1);
        fflush(stdin);
        fgets(s[i].name, 20, stdin);

        scanf("%d", &s[i].rollno);
    }
    for (i = 0; i < n; i++)
    {
        printf("Name %d: %sRollno: %d\n\n", i + 1, s[i].name, s[i].rollno);
    }

    return 0;
}