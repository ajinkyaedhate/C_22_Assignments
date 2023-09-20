// 9. Write a program to print the elements of an array in reverse order.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;
    int n=sizeof(arr)/sizeof(arr[0]);

    ptr = &arr[n-1]; 

    printf("The array in reverse order is:\n");
    while (ptr >= arr)
    {
        printf("%d ", *ptr);
        ptr--;
    }

    return 0;
}