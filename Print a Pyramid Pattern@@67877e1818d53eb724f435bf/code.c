#include <stdio.h>

void printPyramid(int n) {
    // Loop to print each level of the pyramid
    for (int i = 1; i <= n; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= n - i; j++) {
            printf(" ");  // Print spaces to center the stars
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");  // Print stars
        }

        // Move to the next line after printing stars for the current row
        printf("\n");
    }
}

int main() {
    int n;

    // Ask user for the number of levels of the pyramid
    scanf("%d", &n);  // Get user input for number of levels

    // Call the function to print the pyramid
    printPyramid(n);
    
    return 0;
}

