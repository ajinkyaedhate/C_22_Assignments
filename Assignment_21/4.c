// 4. Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]

#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int age;
    float salary;
};

int find_highest_salary_employee(struct employee emp_arr[], int size) {
    int i;
    int highest_salary_index = 0;

    for (i = 1; i < size; i++) {
        if (emp_arr[i].salary > emp_arr[highest_salary_index].salary) {
            highest_salary_index = i;
        }
    }

    return highest_salary_index;
}

int main() {
    struct employee emp_arr[10];
    int i, highest_salary_index;

    for (i = 0; i < 10; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("Name: ");
        fgets(emp_arr[i].name, 50, stdin);
        printf("Age: ");
        scanf("%d", &emp_arr[i].age);
        printf("Salary: ");
        scanf("%f", &emp_arr[i].salary);
        getchar(); 
    }

   
    highest_salary_index = find_highest_salary_employee(emp_arr, 10);
    printf("\nEmployee with the highest salary:\n");
    printf("Name: %s", emp_arr[highest_salary_index].name);
    printf("Age: %d\n", emp_arr[highest_salary_index].age);
    printf("Salary: %f\n", emp_arr[highest_salary_index].salary);

    return 0;
}
