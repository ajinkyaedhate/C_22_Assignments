// 5. Write a program to input a three digit number and display the sum of the digits.
#include <stdio.h>

int main()
{
    int number, digit1, digit2, digit3, sum;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    digit1 = number % 10;
    number = number / 10;
    digit2 = number % 10;
    number = number / 10;
    digit3 = number;

    sum = digit1 + digit2 + digit3;

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
