// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

#include <stdio.h>
#include <math.h>

int main()
{
    int arr[100];
    int n, i;

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe array in reverse order is:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}