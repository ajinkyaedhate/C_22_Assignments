// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include <stdio.h>

int main()
{
    int marks[5];
    int totalMarks = 0;
    int passingMarks = 33;

    printf("Enter the marks for 5 subjects (out of 100):\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks entered. Marks should be between 0 and 100.\n");
            return 1; 
        }

        totalMarks += marks[i];
    }

    double averageMarks = (double)totalMarks / 5.0;

    if (averageMarks >= passingMarks)
    {
        printf("Candidate passed the examination with an average of %.2lf marks.\n", averageMarks);
    }
    else
    {
        printf("Candidate failed the examination with an average of %.2lf marks.\n", averageMarks);
    }

    return 0;
}
