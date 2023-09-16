// 15. Write a program to check whether a given number is positive, negative or zero.
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
    else if (number < 0)
    {
        printf("%d is negative.\n", number);
    }
    else
    {
        printf("%d is zero.\n", number);
    }

    return 0;
}
