// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 2 == 0)
    {
        printf("%d is divisible by both 3 and 2.\n", number);
    }
    else
    {
        printf("%d is not divisible by both 3 and 2.\n", number);
    }

    return 0;
}
