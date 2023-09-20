// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
#include <math.h>
int oddsum(int n)
{
    int x;
    // count=n;
    if (n == 1)
        return 1;
    else
    {

        return (oddsum(n - 1) + 2 * n - 1);
        // x=(2*count-1);
    }
}
int main()
{
    int n = 5, count = 1;
    int sum;
    sum = oddsum(n);
    printf("%d ", sum);

    return 0;
}