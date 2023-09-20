// 4: Write a function to print the first N natural numbers (TSRN).
#include <stdio.h>

void printFirstNNaturalNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("The first %d natural numbers are: \n", n);
    printFirstNNaturalNumbers(n);
    return 0;
}
