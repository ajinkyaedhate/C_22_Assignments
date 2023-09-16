// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include <stdio.h>

int main()
{
    double costPrice, sellingPrice, profitLoss, profitLossPercentage;

    printf("Enter the cost price: ");
    scanf("%lf", &costPrice);

    printf("Enter the selling price: ");
    scanf("%lf", &sellingPrice);

    profitLoss = sellingPrice - costPrice;

    if (profitLoss > 0)
    {
        profitLossPercentage = (profitLoss / costPrice) * 100.0;
        printf("Profit Percentage: %.2lf%%\n", profitLossPercentage);
    }
    else if (profitLoss < 0)
    {
        profitLossPercentage = (-profitLoss / costPrice) * 100.0;
        printf("Loss Percentage: %.2lf%%\n", profitLossPercentage);
    }
    else
    {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
