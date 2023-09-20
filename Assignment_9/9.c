// 8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement

#include <stdio.h>

int main()
{
    int num;
    char choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Choose an operation (N/n for negative, P/p for positive): ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case 'N':
    case 'n':
        if (num > 0)
        {
            num = -num;
            printf("Converted to negative: %d\n", num);
        }
        else if (num < 0)
        {
            num = -num;
            printf("Converted to positive: %d\n", num);
        }
        else
        {
            printf("The number is already zero.\n");
        }
        break;
    case 'P':
    case 'p':
        if (num > 0)
        {
            printf("The number is already positive.\n");
        }
        else if (num < 0)
        {
            num = -num;
            printf("Converted to positive: %d\n", num);
        }
        else
        {
            printf("The number is already zero.\n");
        }
        break;
    default:
        printf("Invalid choice.\n");
    }

    return 0;
}
