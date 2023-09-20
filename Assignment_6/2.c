// 2. Write a program to calculate the sum of the first N even natural numbers
#include <stdio.h>

int main()
{
    int N, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 2; i <= 2 * N; i += 2)
    {
        sum += i;
    }

    printf("Sum of the first %d even natural numbers is %d\n", N, sum);

    return 0;
}
