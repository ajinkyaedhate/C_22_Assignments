// 7. Write a program to demonstrate memory leak in C.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    *ptr = 10;
    printf("Value at ptr: %d\n", *ptr);

    // Memory leak: allocated memory is not freed 
    // to avoid memory leak use below line
    free(ptr);

    return 0;
}
