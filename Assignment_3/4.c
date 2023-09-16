// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number & 1)
    {
        printf("%d is an odd number.\n", number);
    }
    else
    {
        printf("%d is an even number.\n", number);
    }

    return 0;
}
