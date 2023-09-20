// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
#include <stdio.h>
#include <math.h>
int evenodd(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int num, a;
    printf("Enter the number to check even or odd ");
    scanf("%d", &num);
    a = evenodd(num);
    if (a == 1)
    {
        printf("\nnumber is even");
    }
    else
        printf("\nodd");
    return 0;
}