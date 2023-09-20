// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

#include <stdio.h>

int main()
{
    char choice;
    float num1, num2, result;

    while (1)
    {
        printf("Menu:\n");
        printf("a. Addition\n");
        printf("b. Subtraction\n");
        printf("c. Multiplication\n");
        printf("d. Division\n");
        printf("e. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == 'e' || choice == 'E')
        {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice)
        {
        case 'a':
        case 'A':
            result = num1 + num2;
            break;
        case 'b':
        case 'B':
            result = num1 - num2;
            break;
        case 'c':
        case 'C':
            result = num1 * num2;
            break;
        case 'd':
        case 'D':
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                printf("Division by zero is not allowed.\n");
                continue;
            }
            break;
        default:
            printf("Invalid choice.\n");
            continue;
        }

        printf("Result: %.2f\n", result);
    }

    return 0;
}
