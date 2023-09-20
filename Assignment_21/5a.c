#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    float salary;
};

void sortEmployeesBySalary(struct Employee employees[], int n) {
    int i, j;
    struct Employee temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (employees[j].salary > employees[i].salary) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

int main() {
    struct Employee employees[] = {
        {"Alice", 50000},
        {"Bob", 65000},
        {"Charlie", 40000},
        {"David", 80000},
        {"Eve", 55000}
    };
    int n = sizeof(employees) / sizeof(employees[0]);

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %.2f\n", employees[i].name, employees[i].salary);
    }

    sortEmployeesBySalary(employees, n);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %.2f\n", employees[i].name, employees[i].salary);
    }

    return 0;
}
