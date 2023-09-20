// 6. Write a program to print all Prime numbers under 100

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, isPrime;

    for (i = 1; i <= 100; i++)
    {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1 && i > 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}