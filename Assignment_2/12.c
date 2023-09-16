// 12. Write a program to take a three digit number from the user and rotate its digits by
// one position towards the right.

#include <stdio.h>

int main()
{
    int number, originalNumber, rotatedNumber;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    originalNumber = number;

    int rightmostDigit = number % 10;

    number = number / 10;

    rotatedNumber = rightmostDigit * 100 + number;

    printf("Original number: %d\n", originalNumber);
    printf("Rotated number: %d\n", rotatedNumber);

    return 0;
}
