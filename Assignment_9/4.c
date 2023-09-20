// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle or not
// d. Exit

#include <stdio.h>
#include <stdbool.h>

bool isIsosceles(double a, double b, double c)
{
    return (a == b || b == c || a == c);
}

bool isRightAngled(double a, double b, double c)
{
    return (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a);
}

bool isEquilateral(double a, double b, double c)
{
    return (a == b && b == c);
}

int main()
{
    char choice;
    double side1, side2, side3;

    do
    {
        printf("Menu:\n");
        printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("b. Check whether a given set of three numbers are lengths of sides of a right-angled triangle or not\n");
        printf("c. Check whether a given set of three numbers are lengths of an equilateral triangle or not\n");
        printf("d. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case 'a':
            printf("Enter three side lengths: ");
            scanf("%lf %lf %lf", &side1, &side2, &side3);
            if (isIsosceles(side1, side2, side3))
            {
                printf("It is an isosceles triangle.\n");
            }
            else
            {
                printf("It is not an isosceles triangle.\n");
            }
            break;
        case 'b':
            printf("Enter three side lengths: ");
            scanf("%lf %lf %lf", &side1, &side2, &side3);
            if (isRightAngled(side1, side2, side3))
            {
                printf("It is a right-angled triangle.\n");
            }
            else
            {
                printf("It is not a right-angled triangle.\n");
            }
            break;
        case 'c':
            printf("Enter three side lengths: ");
            scanf("%lf %lf %lf", &side1, &side2, &side3);
            if (isEquilateral(side1, side2, side3))
            {
                printf("It is an equilateral triangle.\n");
            }
            else
            {
                printf("It is not an equilateral triangle.\n");
            }
            break;
        case 'd':
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 'd');

    return 0;
}
