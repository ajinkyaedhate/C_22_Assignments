// 2. Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float *arr;
    float sum = 0.0, avg;

    printf("Enter how many data values you want: ");
    scanf("%d", &n);

    arr = (float *)calloc(n, sizeof(float));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter the %d data values:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;
    printf("The average of the data values is %.4f\n", avg);
    free(arr);

    return 0;
}
