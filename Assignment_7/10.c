// 10. Write a program to print all Armstrong numbers under 1000
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 1000;
    int i, count = 0, a, b, sum = 0;
    for (i = 0; i <= n; i++)
    {
        count = 0;
        a = i;
        while (a)
        {
            count++;
            a = a / 10;
        }
        sum = 0;
        b = i;

        while (b)
        {
            a = b;
            a = a % 10;
            sum = sum + pow(a, count);
            b = b / 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}