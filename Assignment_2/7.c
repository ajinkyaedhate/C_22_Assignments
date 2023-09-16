// 7. Write a program to check whether the given number is even or odd using a bitwise operator.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
    {
        printf("%d is odd.\n", num);
    }
    else
    {
        printf("%d is even.\n", num);
    }

    return 0;
}
