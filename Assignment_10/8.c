// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

unsigned long long calculateArrangements(int n, int r)
{
    if (n < r)
    {
        return 0;
    }
    return factorial(n) / factorial(n - r);
}

int main()
{
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (n >= 0 && r >= 0)
    {
        unsigned long long arrangements = calculateArrangements(n, r);
        printf("Number of arrangements (nPr) = %llu\n", arrangements);
    }
    else
    {
        printf("Invalid input. Both n and r must be non-negative integers.\n");
    }

    return 0;
}
