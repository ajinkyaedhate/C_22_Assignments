// 8. Write a function to print PASCAL Triangle. (TSRN)
#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr value
int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", nCr(i, j));
        }
        printf("\n");
    }
}

// Main function to test the program
int main()
{
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);
    printf("Pascal's Triangle for %d rows:\n", n);
    printPascalsTriangle(n);
    return 0;
}
