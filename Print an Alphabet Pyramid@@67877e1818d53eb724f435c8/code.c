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
    }

        // Print alphabets in the current row
    for (char ch = 'A'; ch < 'A' + i; ch++) {
    if (ch == 'A' + i - 1) // Check if it's the last character
        printf("%c", ch);
    else
        printf("%c ", ch);
}
    }



