// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
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
    int max = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("\n %d is maximum element in aaray", max);

    return 0;
}