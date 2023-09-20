// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.

#include <stdio.h>
#include <math.h>

int main()
{
    int arr[100];
    int arr2[100];

    int n, i;

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe array \"arr\" is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        arr2[i]=arr[i];
    }

    printf("\nThe array \"arr2\" is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}