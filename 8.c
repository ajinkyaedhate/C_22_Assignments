// 8. Write a program to print size of an int, a float, a char and a double type variable
#include <stdio.h>

int main()
{
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of double: %lu bytes\n", sizeof(double));

    return 0;
}
