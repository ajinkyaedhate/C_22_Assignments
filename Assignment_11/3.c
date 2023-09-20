// 3. Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {

            return 0; // or break
        }
        else
            return 1;
    }
    // return 1;
}

int main()
{
    int num1 = 24, num2 = 8, num;

    // lcm=num1*num2/gcd(num1,num2);
    num = prime(num1);
    if (num == 0)
        printf("not a prime number");
    else
        printf("prime number");
    return 0;
}