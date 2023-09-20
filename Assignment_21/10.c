// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.

struct student
{
    int rollno;
    ;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float percentage;
};

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct student s[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter roll no. of student %d:\n", i + 1);
        scanf("%d", &s[i].rollno);
        fflush(stdin);
        printf("Enter his/her name :\n");
        fgets(s[i].name, 20, stdin);
        printf("Enter his/her marks of Chemistry: ");
        scanf("%d", &s[i].chem_marks);
        printf("Enter his/her marks of Mathematics: ");
        scanf("%d", &s[i].maths_marks);
        printf("Enter his/her marks of Physics: ");
        scanf("%d", &s[i].phy_marks);
        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nRoll no. %d :\n", i + 1);
        printf("Name : %s", s[i].name);
        printf("Chemistry : %d\n", s[i].chem_marks);
        printf("Mathematics : %d\n", s[i].maths_marks);
        printf("Physics : %d\n", s[i].phy_marks);
        s[i].percentage = (((s[i].chem_marks + s[i].maths_marks + s[i].phy_marks)) / 3.0);
        printf("Percentage : %.2f\n", s[i].percentage);
        printf("\n");
    }
    printf("\n");

    return 0;
}