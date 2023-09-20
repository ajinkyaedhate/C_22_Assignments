// 9. Write a program to check whether a given number is an Armstrong number or not

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 153;
    int a = n;
    int i, j, temp = 0, count = 0, b = 0, sum = 0;
    while (a)
    {
        a = a / 10;
        count++;
    }
    a = n;
    printf("%d\n", count);
    while (n)
    {
        b = n % 10;
        temp = b;

        // for (i = 0; i < count-1; i++)
        // {
        //     b = b * temp;
        // }

        n = n / 10;
        sum = sum + pow(b, count);
    }
    if (sum == a)
        printf("%d is armstrong number", a);
    else
        printf("%d is not armstrong number", a);

    return 0;
}