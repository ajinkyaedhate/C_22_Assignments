// 2.. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
#include <stdio.h>
#include <math.h>

int main()
{
    int arr[100];
    int n, i ;
    float sum = 0;
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
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    float avg= sum/n;
    printf("\n%.2f is sum and %.2f is avg", sum, avg);

    return 0;
}