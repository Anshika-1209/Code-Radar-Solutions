#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces for centering
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print alphabets in the current row
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            if (ch == 'A' + i - 1) // Check if it's the last character in the row
                printf("%c", ch);  // No space after the last character
            else
                printf("%c ", ch);  // Print with space for other characters
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
