#include <stdio.h>

int main() {
    int rows;

    // Ask the user for the number of rows
    scanf("%d", &rows);

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces for centering
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print alphabets in the current row
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
