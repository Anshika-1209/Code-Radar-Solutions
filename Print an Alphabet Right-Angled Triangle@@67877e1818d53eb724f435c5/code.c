#include <stdio.h>

int main() {
    int rows;

    // Ask user for number of rows

    scanf("%d", &rows);

    // Loop to print each row
    for (int i = 1; i <= rows; i++) {
        // Loop to print characters in each row
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
