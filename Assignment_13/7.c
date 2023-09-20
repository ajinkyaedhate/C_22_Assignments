// 7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int n1, int n2)
{
    if (n1 == n2)
        return n1;
    else if (n1 > n2)
        return hcf(n1 - n2, n2);
    else
        return hcf(n1, n2 - n1);
}
int main()
{
    int n1 = 8, n2 = 4;
    int HCF = hcf(n1, n2);
    printf("%d", HCF);

    return 0;
}
