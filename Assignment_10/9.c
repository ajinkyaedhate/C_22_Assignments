
// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include <stdio.h>
#include <math.h>
int check(int num, int digit)
{
    int a;
    while (num % 10)
    {
        a = num % 10;
        if (a == digit)
        {
            return a;
        }
        else
            num = num / 10;
    }
    return a;
}
int main()
{
    int num = 30055678, digit = 6, digit2;
    digit2 = check(num, digit);
    if (digit2 == digit)
    {
        printf("digit found");
    }
    else
        printf("not foumd");

    return 0;
}