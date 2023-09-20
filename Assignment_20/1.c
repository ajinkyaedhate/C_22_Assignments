// 1. Write a function to swap values of two in variables of calling function.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a = 10, b = 7;
    printf("before swapping a: %d and b: %d\n", a, b);
    swap(&a, &b);
    printf("after swapping a: %d and b: %d\n", a, b);

    return 0;
}