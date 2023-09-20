// 1. Write a recursive function to print first N natural numbers

#include <stdio.h>

void printNaturalNumbers(int N)
{
    if (N > 0)
    {
        printNaturalNumbers(N - 1);
        printf("%d ", N);
    }
}

int main()
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("N should be a positive integer.\n");
    }
    else
    {
        printf("The first %d natural numbers are: ", N);
        printNaturalNumbers(N);
        printf("\n");
    }

    return 0;
}
