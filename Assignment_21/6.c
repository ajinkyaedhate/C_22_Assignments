// 6. Write a function to sort employees according to their names [refer structure from
// question 1]
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

void emp_name_sort(struct employee *ptr, int size)
{
    int i, j;
    struct employee temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (strcmp(ptr[i].name, ptr[j].name) > 0)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter how many employee's data you want to enter:\n");
    scanf("%d", &n);

    struct employee s[n];
    struct employee *ptr;
    int i, j, max_salary;
    for (i = 0; i < n; i++)
    {

        printf("Enter name %d : ", i + 1);
        fflush(stdin);
        fgets(s[i].name, 30, stdin);
        printf("Enter its id: ");
        scanf("%d", &s[i].id);
        printf("Enter its salary: ");
        scanf("%f", &s[i].salary);
        printf("\n");
        // salary[i] = s[i].salary;
    }

    // ptr = s;
    printf("\n\n");
    printf("Employees order before sorting their names\n");

    for (i = 0; i < n; i++)
    {

        printf("Name %d: %s", i + 1, s[i].name);
        printf("your id is %d\n", s[i].id);
        printf("your salary is %.2f\n\n", s[i].salary);
    }

    emp_name_sort(&s[0], n);
    printf("\n\n");
    printf("Employees order after sorting their names\n");

    for (i = 0; i < n; i++)
    {

        printf("Name %d: %s", i + 1, s[i].name);
        printf("your id is %d\n", s[i].id);
        printf("your salary is %.2f\n\n", s[i].salary);
    }

    return 0;
}