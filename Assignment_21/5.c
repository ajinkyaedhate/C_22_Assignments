// 5. Write a function to sort employees according to their salaries [ refer structure from
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

int main()
{
    int n;
    printf("Enter how many employee's data you want to enter:\n");
    scanf("%d", &n);

    struct employee s[n];
    int salary[n];
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
    printf("Unsorted salary order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", s[i].salary);
    }
    printf("\n");

    // max_salary = salary[0];
    // for (i = 0; i < n - 1; i++)
    // {
    //     for (j = i + 1; j < n; j++)
    //     {
    //         if ( s[i].salary< s[j].salary)  // is code se sirf salary hisort hogi naki pura structure
    //         {
    //             max_salary =  s[i].salary;
    //              s[i].salary = s[j].salary;
    //             s[j].salary = max_salary;
    //         }
    //     }
    // }


struct employee temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].salary < s[j].salary)
            {
                temp = s[i];
                s[i] = s[j]; //
                s[j] = temp;
            }
        }
    }

    printf("\nSorted salary order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", s[i].salary);
    }
    printf("\n\n");
    printf("Employees order according to their salary\n");

    for (i = 0; i < n; i++)
    {

        printf("Name %d: %s", i + 1, s[i].name);
        printf("your id is %d\n", s[i].id);
        printf("your salary is %.2f\n\n", s[i].salary);
    }

    return 0;
}