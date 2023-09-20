// 1 2 3 4 5 6 7 6 5 4 3 2 1 
//   1 2 3 4 5 6 5 4 3 2 1
//     1 2 3 4 5 4 3 2 1
//       1 2 3 4 3 2 1
//         1 2 3 2 1
//           1 2 1
//             1
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
