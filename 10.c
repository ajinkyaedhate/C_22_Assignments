// 10. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)

#include <stdio.h>

int main()
{
    int number, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter a digit to append: ");
    scanf("%d", &digit);

    int result = number * 10 + digit;

    printf("Resulting number after appending %d: %d\n", digit, result);

    return 0;
}
