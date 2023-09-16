// 2. Write a program to print a given number without its last digit.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = num / 10;

    printf("The number without its last digit is: %d\n", num);

    return 0;
}
