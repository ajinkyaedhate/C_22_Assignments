// 6. Write a recursive function to calculate factorial of a given number
#include <stdio.h>
#include <math.h>
int facto(int n)
{
    
    if (n == 1)
        return 1;
    return facto(n - 1) * n;
}
int main()
{
    int n = 5, fact;
    fact = facto(n);
    printf("%d", fact);

    return 0;
}