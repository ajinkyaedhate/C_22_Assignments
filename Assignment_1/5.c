// 5. WAP to calculate the length of String using printf function.
#include <stdio.h>

int main() {
    char str[100]; 

    printf("Enter a string: ");
    scanf("%s", str);

    int length = 0;

    // while (str[length] != '\0') {
    //     length++;
    // }

    length = printf("%s", str);
    printf("\n");
    printf("length = %d",length);

    return 0;
}
