// 2. Write a function to calculate hcf of two numbers
#include <stdio.h>
#include <math.h>
int hcf(int n1, int n2)
{
    int i;
    for (i = n1 > n2 ? n1 : n2; i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i; // or break
        }
    }
}

int main()
{
    int num1 = 8, num2 = 4, num;

    // lcm=num1*num2/gcd(num1,num2);
    num = hcf(num1, num2);
    printf("HCF of %d and %d is %d\n", num1, num2, num);
    return 0;
}

//  for(i=1; i <= n1 && i <= n2; ++i)
//     {
//         // Checks if i is factor of both integers
//         if(n1%i==0 && n2%i==0)
//             gcd = i;
//     }