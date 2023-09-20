// 4. Write a program to calculate HCF of two numbers

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n1 = 4, n2 = 8;
    int hcf = 0;
    int i = 0, j = 0;
    int n = n1 > n2 ? n1 : n2;
    // printf("%d",n);
    for (i = n; i > 2; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
            break;
        }
    }
    printf("\n%d", hcf);

    return 0;
}