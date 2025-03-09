#include <stdio.h>
int main() {
    int rows;
    scanf("%d", &rows);

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Loop to print alternating numbers
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0)  // Alternate between 1 and 0
                printf("1");
            else
                printf("0");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

