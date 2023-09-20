#include <stdio.h>
#include <math.h>
void primenumber(int n1, int n2)
{
    int i, j, k, flag = 0;
    for (i = n1; i <= n2; i++)
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
        if (flag == 0 && i != 1)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int a = 15, b = 100;
    primenumber(a, b);

    return 0;
}