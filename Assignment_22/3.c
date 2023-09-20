// 3. Write a program to calculate the sum of n numbers entered by the user using malloc
// and free.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter the %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of the elements is %d\n", sum);

    free(arr);

    return 0;
}
