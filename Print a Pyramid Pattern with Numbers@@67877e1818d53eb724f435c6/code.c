#include <stdio.h>

int main() {
    int rows;

    // Ask user for the number of rows

    scanf("%d", &rows);

    // Loop to print each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print numbers in the row
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
