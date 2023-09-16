// 5. Write a program to check whether a given number is a three digit number or not.

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 100 && number <= 999) {
        printf("%d is a three-digit number.\n", number);
    } else {
        printf("%d is not a three-digit number.\n", number);
    }

    return 0;
}
