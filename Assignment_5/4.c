// 4. Write a program to print the first N odd natural numbers
#include <stdio.h>

int main()
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= 2 * N - 1; i += 2)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
