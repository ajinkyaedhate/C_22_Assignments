// Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
#include <stdio.h>
#include <math.h>

int main()
{
    int arr[100];
    int n, i;
    int evensum = 0, oddsum = 0;
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
        if (arr[i] % 2 == 0)
            evensum = evensum + arr[i];
    }
    // float avg= sum/n;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            oddsum = oddsum + arr[i];
    }
    printf("\nsum of even elements of array is %d", evensum);
    printf("\nsum of even elements of array is %d", oddsum);

    return 0;
}