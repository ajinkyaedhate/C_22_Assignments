// 10. Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
#include <math.h>
int power(int n, int pow)
{
    if (pow == 1)
        return n;
    return  power(n,pow-1)*n;
}
int main()
{
    int n=2,pow=5, sum;
    sum = power(n,pow);
    printf("%d", sum);

    return 0;
}