// 9. Write a program to print cubes of the first N natural numbers
#include <stdio.h>

int main()
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("Cube of %d is %d\n", i, i * i * i);
    }

    return 0;
}
