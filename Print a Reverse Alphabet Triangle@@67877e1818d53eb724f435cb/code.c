#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    // Loop for each row
    for (int i = rows; i >= 1; i--) {
        // Print alphabets in the current row
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
``

