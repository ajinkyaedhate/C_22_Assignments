// 6. Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>

// Recursive function to print first N even natural numbers in reverse order
void printReverseEvenNumbers(int N, int current)
{
    if (N <= 0)
    {
        return; // Base case: stop when N reaches 0 or negative
    }

    if (current % 2 == 0)
    {
        printf("%d ", current);
        printReverseEvenNumbers(N - 1, current - 2);
    }
    else
    {
        printReverseEvenNumbers(N, current - 1);
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
        printf("The first %d even natural numbers in reverse order are: ", N);
        printReverseEvenNumbers(N, 2 * N);
        printf("\n");
    }

    return 0;
}
