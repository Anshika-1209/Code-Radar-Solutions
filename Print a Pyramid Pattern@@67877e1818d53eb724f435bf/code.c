#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = n; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }
}
