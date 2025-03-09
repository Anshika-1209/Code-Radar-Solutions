#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces for centering the pyramid
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
