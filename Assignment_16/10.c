// 10. Write a program in C to find the row with maximum number of 1s.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[3][3] = {1, 0, 3,
                   4, 5, 6,
                   7, 0, 9};
    int i, j, count = 0, row[3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        count = 0;

        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
                count++;
        }
        row[i] = count;

        printf("\n");
    }
    printf("%d\n", row[0]);
    printf("%d\n", row[1]);
    printf("%d\n", row[2]);

    if (row[0] != 0 || row[1] != 0 || row[2] != 0)
    {
        if (row[0] > row[1] && row[0] > row[2])
            printf("1st row has maximum number of  ones ");
        else if (row[1] > row[2])
            printf("2nd row has maximum number of ones ");
        else
            printf("3rs row has maximum number of  ones ");
    }
    else
        printf("either all rows are non zero ");

    return 0;
}