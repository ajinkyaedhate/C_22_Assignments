// 3. Write a program to calculate the sum of the first N odd natural numbers
#include <stdio.h>

int main()
{
    int N, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= 2 * N - 1; i += 2)
    {
        sum += i;
    }

    printf("Sum of the first %d odd natural numbers is %d\n", N, sum);

    return 0;
}
