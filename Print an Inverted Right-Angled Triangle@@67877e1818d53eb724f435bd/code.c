#include <stdio.h>

int main() {
    int N;

    // Get number of rows from the user
    scanf("%d", &N);

    // Loop to print rows
    for (int i = N; i>=1; i--) {
        // Loop to print stars in each row
        for (int j = 1; j<=i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

  