// 11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
// and convert it into USD.

#include <stdio.h>

int main()
{
    double inr, usd, exchangeRate;

    exchangeRate = 76.23;

    printf("Enter the amount in INR: ");
    scanf("%lf", &inr);

    usd = inr / exchangeRate;

    printf("%.2lf INR is equal to %.2lf USD\n", inr, usd);

    return 0;
}
