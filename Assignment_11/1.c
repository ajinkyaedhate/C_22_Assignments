// functin to calculate the LCM of two numbers
#include <stdio.h>
#include <math.h>
int lcm(int n1, int n2)
{
    int i;
    for (i = 2; i <= n1 * n2; i++)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            return i; // or break
        }
    }
    return i;
}

int main()
{
    int num1 = 14, num2 = 8, num;

    // lcm=num1*num2/gcd(num1,num2);
    num = lcm(num1, num2);
    printf("LCM of %d and %d is %d\n", num1, num2, num);
    return 0;
}