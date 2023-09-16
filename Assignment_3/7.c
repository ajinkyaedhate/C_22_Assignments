// 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 and Root 2: %.2lf\n", root1);
    }
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are imaginary:\n");
        printf("Root 1: %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2: %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
