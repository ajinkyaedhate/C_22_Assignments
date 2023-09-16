// 6. WAP to print the name of the user in double quotes.
// Expected output format – “Hello , Amit Kumar”

#include <stdio.h>

int main() {
    char name[100]; 

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello, \"%s\"\n", name);

    return 0;
}
