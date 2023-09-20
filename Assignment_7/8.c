// 7. Write a program to print next prime number given number

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a = 103;
    int i, j;
    int flag = 0;
    for (i = a + 1; i <= a * 2; i++)
    {
        flag = 0;
        for (j = 2; j < i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
            break;
        }
    }

    return 0;
}