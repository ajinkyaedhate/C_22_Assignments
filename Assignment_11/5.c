#include <stdio.h>
#include <math.h>
void primenumber(int n)
{
    int i, j, k, flag = 0, count = 1;
    for (i = 1; i <= n * n; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i != 1 && count != n + 1)
        {
            printf("%d ", i);
            count++;
        }
    }
}

int main()
{
    int n = 20;
    primenumber(n);

    return 0;
}