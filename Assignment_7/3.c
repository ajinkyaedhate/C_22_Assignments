// 3. Write a program to check whether a given number is there in the Fibonacci series or
// not.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int i, num1 = 1, num2 = 1, num3;
    int flag = 0;
    printf("Enter the number to be checked: ");
    scanf("%d", &n);
    for (i = 3; i <= n; i++)
    {
        num3 = num1 + num2;
        if (num3 == n)
        {
            flag = 1;
            break;
        }
        num1 = num2;
        num2 = num3;
    }
    if (flag == 1)
    {
        printf("The number %d is in the series.\n",n);
    }
    else
    {
        printf("The number %d is not in the series.\n",n);
    }

    return 0;
}