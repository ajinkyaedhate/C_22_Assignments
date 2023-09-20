// 7. Write a program to calculate the difference between two time periods.

struct time
{
    int hour;
    int minute;
    int second;
};

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct time t1, t2, difference;
    printf("***** Enter the time periods in the format hh:mm:ss(12 hr) *****\n");

    printf("Enter Start time:\n");
    scanf("%d:%d:%d", &t1.hour, &t1.minute, &t1.second);
    printf("Enter End time: \n");
    scanf("%d:%d:%d", &t2.hour, &t2.minute, &t2.second);

    difference.hour = t2.hour - t1.hour;
    difference.minute = t2.minute - t1.minute;
    difference.second = t2.second - t1.second;
    if (difference.second < 0)
    {
        difference.second = 60 + difference.second;
        difference.minute--;
        if (difference.minute < 0)
        {
            difference.minute = 60 + difference.minute;
            if (difference.hour <= 0)
            {
                difference.hour--;
                difference.hour = 12 + difference.hour;
            }
            else
            {
                difference.hour--;
            }
        }
    }
    else if (difference.minute < 0)
    {
        difference.minute = 60 + difference.minute;
        if (difference.hour < 0)
        {
            difference.hour--;
            difference.hour = 12 + difference.hour;
        }
        else
        {
            difference.hour--;
        }
    }
    else if (difference.hour < 0)
    {
        difference.hour = 12 + difference.hour;
    }

    printf("The difference between the two time periods is %d hours, %d minutes and %d seconds\n\n\n", difference.hour, difference.minute, difference.second);

  

    return 0;
}