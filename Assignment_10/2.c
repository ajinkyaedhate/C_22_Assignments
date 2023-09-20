// 2. Write a function to calculate simple interest. (TSRS)

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{

    int principal, rate, time, interest;

    printf("Enter the principal: ");
    scanf("%d", &principal);

    printf("Enter the rate: ");
    scanf("%d", &rate);

    printf("Enter the no of years: ");
    scanf("%d", &time);

    interest = principal * rate * time / 100;
    printf("The Simple interest is %d", interest);

    return 0;
}