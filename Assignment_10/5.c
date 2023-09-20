// 5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>

void printFirstNOddNaturalNumbers(int n)
{
    for (int i = 1; i <= 2 * n; i += 2)
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
    printf("The first %d odd natural numbers are: \n", n);
    printFirstNOddNaturalNumbers(n);
    return 0;
}
