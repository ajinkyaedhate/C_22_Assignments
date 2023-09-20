// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
#include <stdio.h>

int findAdjacentDuplicates(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i]; 
        }
    }
    return -1; 
}

int main()
{
    int arr[] = {5, 7, 2, 4, 4, 6, 9, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    int duplicate = findAdjacentDuplicates(arr, n); 
    if (duplicate != -1)
    {
        printf("The first adjacent duplicate value in the array is: %d", duplicate);
    }
    else
    {
        printf("No adjacent duplicate values found in the array.");
    }

    return 0;
}