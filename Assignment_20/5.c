// 5. Write a program to find the maximum number between two numbers using a pointer

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num1, num2;
    int *p1, *p2;
    printf("Enter a num1:\n");
    scanf("%d", &num1);
    printf("Enter a num2:\n");
    scanf("%d", &num2);
    p1 = &num1;
    p2 = &num2;
    if (*p1 > *p2)
    {
        printf("%d is the maximum number\n", *p1);
    }
    else if (*p2 > *p1)
    {
        printf("%d is the maximum number\n", *p2);
    }
    else
        printf("both are equal");
    return 0;
}