// 1. Write a program to check whether a given number is positive or non positive.
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("%d is positive.\n", number);
    }
    else if (number == 0)
    {
        printf("%d is neither positive nor negative.\n", number);
    }
    else
    {
        printf("%d is non-positive.\n", number);
    }

    return 0;
}
