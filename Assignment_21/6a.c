#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

void sortEmployeesByName(struct Employee *empPtr, int size);

int main() {
    struct Employee employees[3] = {
        {"John", 25, 50000.0},
        {"Mary", 30, 60000.0},
        {"Bob", 28, 55000.0}
    };

    // Print the employees before sorting
    printf("Before sorting:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    // Sort the employees by name
    sortEmployeesByName(&employees[0], 3);

    // Print the employees after sorting
    printf("\nAfter sorting:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}

void sortEmployeesByName(struct Employee *empPtr, int size) {
    int i, j;
    struct Employee temp;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (strcmp(empPtr[i].name, empPtr[j].name) > 0) {
                temp = empPtr[i];
                empPtr[i] = empPtr[j];
                empPtr[j] = temp;
            }
        }
    }
}
