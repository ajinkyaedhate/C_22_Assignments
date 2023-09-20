// 1. Write a recursive function to calculate sum of first N natural numbers

#include <stdio.h>
#include <math.h>

int sum(int n)
{
    int x = n;
    if (n == 1)
        return 1;
    else
    {
        return (sum(n - 1) + x);
    }
}

int main()
{
    int sum1;
    sum1 = sum(10);
    printf("%d", sum1);

    return 0;
}