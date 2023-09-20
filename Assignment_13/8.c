// 8. Write a recursive function to print first N terms of Fibonacci series
#include <stdio.h>
#include <math.h>
int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;

    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n = 10;
    // printf("%d %d ", n1,n2);
    fibonacci(n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}


