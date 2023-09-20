// 11. Write a program to find the position of first 1 in LSB
#include <stdio.h>

int main()
{
    int num, pos = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while ((num & 1) == 0)
    {
        pos++;
        num >>= 1;
    }

    printf("The position of the first 1 in the LSB is: %d\n", pos + 1);
    return 0;
}
