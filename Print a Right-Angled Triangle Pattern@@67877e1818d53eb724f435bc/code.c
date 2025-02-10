#include <stdio.h>

int main() {
    int N;

    // Input number of rows for the triangle
    scanf("%d", &N);

    // Outer loop for rows
    for (int i = 1; i <= N; i++) {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
