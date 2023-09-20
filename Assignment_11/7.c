// first n terms of fibbonaci series using function(TSRN)

#include <stdio.h>
#include <math.h>
void fibbonaci(int n)
{
    int i, n1 = 1, n2 = 1, n3 = 2, count = 1;
    printf("%d %d ", n1, n2);

    for (i = 3; i <= n; i++)
    {
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
        // printf("%d ",n3);
    }
}

int main()
{
    int n = 15, n1 = 1, n2 = 2;
    fibbonaci(n);

    return 0;
}