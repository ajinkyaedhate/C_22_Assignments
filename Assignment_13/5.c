// 5. Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
#include <math.h>
int sumdigit(int n)
{
    if (n == 0)
        return 0;
    return (sumdigit(n / 10) + n%10);
}
int main()
{
    int n=100, sum;
    sum = sumdigit(n);
    printf("%d", sum);

    return 0;
}