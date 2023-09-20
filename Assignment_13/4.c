// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>
#include <math.h>
int sumsquare(int n)
{
    int x;
    // count=n;
    if (n == 1)
        return 1;
    else
    {

        return (sumsquare(n - 1) + n * n); // for whole ->2n-1
        // x=(2*count-1);
    }
}
int main()
{
    int n = 5, count = 1;
    int sum;
    sum = sumsquare(n);
    printf("%d ", sum);

    return 0;
}