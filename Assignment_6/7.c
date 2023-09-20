// 7. Write a program to count the number of digits in a given number
#include <stdio.h>

int main()
{
    long long num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0)
    {
        count = 1; // Special case for 0
    }
    else
    {
        while (num != 0)
        {
            num /= 10;
            count++;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
