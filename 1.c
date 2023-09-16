// 1. Write a program to print unit digit of a given number
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int unitDigit = num % 10;

    printf("The unit digit of %d is %d\n", num, unitDigit);

    return 0;
}
