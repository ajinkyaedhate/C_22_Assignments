// 18. Write a program which takes the month number as an input and display number of days in that month.
#include <stdio.h>

int main()
{
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12)
    {
        int daysInMonth;

        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daysInMonth = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = 28; // non-leap year
            break;
        }

        printf("Number of days in month %d: %d\n", month, daysInMonth);
    }
    else
    {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}
