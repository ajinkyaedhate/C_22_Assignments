// 5. Write a program to check whether two given numbers are co-prime numbers or not

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Function to check if two numbers are coprime
int areCoprime(int a, int b)
{
    int smaller = (a < b) ? a : b;

    for (int i = 2; i <= smaller; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            return 0; // Not coprime
        }
    }
    return 1; // Coprime
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (areCoprime(num1, num2))
    {
        printf("%d and %d are co-prime numbers.\n", num1, num2);
    }
    else
    {
        printf("%d and %d are not co-prime numbers.\n", num1, num2);
    }

    return 0;
}
