// 4. Write a recursive function to print first N odd natural numbers in reverse order.

#include <stdio.h>


void printReverseOddNumbers(int N)
{
    if (N <= 0)
    {
        return; // Base case: stop when N reaches 0 or negative
    }

    if (N % 2 != 0)
    {
        printf("%d ", 2 * N - 1); // Print the current odd number
    }

    printReverseOddNumbers(N - 1); // Recursive call with N-1
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
        printf("The first %d odd natural numbers in reverse order are: ", N);
        printReverseOddNumbers(N);
        printf("\n");
    }

    return 0;
}
