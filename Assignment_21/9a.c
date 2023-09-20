struct student
{
    char name[20];
    int rollno;
};

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    printf("how many students data you want to enter:");
    scanf("%d", &n);
    /* struct student s[n] ;
    or calloc or malloc approach
    */
    struct student s;
    struct student *ptr;
    ptr = (struct student *)calloc(n, sizeof(struct student));
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("Enter name and rollno of student %d:\n", i + 1);
        fflush(stdin);
        fgets(ptr[i].name /*or (ptr+i)->name or *(ptr+i).name*/, 20, stdin);

        scanf("%d", &ptr[i].rollno);
    }
    for (i = 0; i < n; i++)
    {
        printf("Name %d: %sRollno: %d\n\n", i + 1, ptr[i].name, ptr[i].rollno);
    }

    return 0;
}