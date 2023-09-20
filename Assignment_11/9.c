// 9. Write a program in C to find the square of any number using the function.

#include <stdio.h>

double square(double num)
{
    return num * num;
}

int main()
{
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    double result = square(number);

    printf("The square of %.2lf is %.2lf\n", number, result);

    return 0;
}
