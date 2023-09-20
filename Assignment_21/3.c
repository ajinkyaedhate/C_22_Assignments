// 3. Write a function to display employee data. [ Refer structure from question 1 ]

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    char name[30];
    int id;
    float salary;
};

int main()
{
    struct employee s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter id: ");
    scanf("%d", &s.id);
    printf("Enter salary: ");
    scanf("%f", &s.salary);

    printf("your name is %s\n",s.name);
    printf("your id is %d\n",s.id);
    printf("your salary is %.2f",s.salary);

    return 0;
}