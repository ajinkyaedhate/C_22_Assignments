
// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function
#include <stdio.h>
#include <math.h>
int facto(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void series(int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + facto(n - i) / (n - i);
    }
    printf("%d", sum);
}

int main()
{
    int n = 3, fact;
    // fact=facto(n);
    // printf("%d\n",fact);
    series(n);

    return 0;
}