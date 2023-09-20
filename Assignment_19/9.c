// 9. Write a program that asks the user to enter a username. If the username entered is
// one of the names in the list then the user is allowed to calculate the factorial of a
// number. Otherwise, an error message is displayed

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[20][50] = {"ajinkya", "ramesh", "rohan", "kiran", "aniket", "sahil", "nitin", "sachin", "onkar"};
    int n = 9;
    int i, j;
    char user[50];
    int num;
    int factorial = 1;
    int count = 0;
    printf("Enter your user name: \n");
    scanf("%s", user);
    for (i = 0; i < n; i++)
    {
        if (strcmpi(user, s[i]) == 0)
            count = 1;
    }
    if (count == 1)
    {
        printf("Enter a number of which you want to calculate its factorial: \n");
        scanf("%d", &num);
        for (i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }
        printf("%d! = %d\n", num, factorial);
    }
    else
        printf("Sorry, you are not allowed to calculate the factorial");

    return 0;
}