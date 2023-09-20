//4. Find the next prime number of given number

#include <stdio.h>
#include <math.h>
int nextprime(int n)
{
    int i, j, count;
    for (i = n + 1; i <= n * 2; i++)
    {
        count = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
            return i;
    }
}

int main()
{
    int n = 45, num;
    num = nextprime(n);
    printf("%d is next prime number\n", num);

    return 0;
}