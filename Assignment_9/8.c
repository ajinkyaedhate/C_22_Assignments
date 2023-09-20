// 8. Program to convert a positive number into a negative number and negative number
// into a positive number using a switch statement.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num, choice;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter 1 to convert number to a negative number\n");
    printf("Enter 2 to convert number to a positive number\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            num = -num;
            printf("The negative of %d is %d\n", -num, num);
            break;
        case 2:
            if (num < 0) {
                num = -num;
            }
            printf("The positive of %d is %d\n", -num, num);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    
    return 0;
}
