// 17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not
#include <stdio.h>

int main()
{
    double side1, side2, side3;

    printf("Enter the length of the first side: ");
    scanf("%lf", &side1);

    printf("Enter the length of the second side: ");
    scanf("%lf", &side2);

    printf("Enter the length of the third side: ");
    scanf("%lf", &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("The triangle with sides %.2lf, %.2lf, and %.2lf is valid.\n", side1, side2, side3);
    }
    else
    {
        printf("The triangle with sides %.2lf, %.2lf, and %.2lf is not valid.\n", side1, side2, side3);
    }

    return 0;
}
