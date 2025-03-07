#include <stdio.h>
void printDiamond(int N) {
    // Top half of the diamond (including the middle row)
    for (int i = 1; i <= N; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Bottom half of the diamond
    for (int i = N - 1; i >= 1; i--) {
        // Print spaces before the stars
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int N;
    // Take input for number of rows N (top half of the diamond)
    scanf("%d", &N);
    // Call the function to print the diamond pattern
    printDiamond(N);
    return 0;
}
