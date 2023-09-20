#include <stdio.h>
#include <math.h>
int evennaturalnumber(int n, int count)
{
    if (count < n)
    {
        printf("%d ", 2 * count);
        evennaturalnumber(n, count + 1);
    }
}
int main()
{
    int n = 20;
    evennaturalnumber(n, 0);

    return 0;
}