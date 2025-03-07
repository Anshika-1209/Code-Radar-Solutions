#include <stdio.h>
void printHollowSquare(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Print stars on the border or on the first or last row/column
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main() {
    int N;
    // Take input for side length N
    printf("Enter the side length of the square: ");
    scanf("%d", &N);
    // Call the function to print hollow square
    printHollowSquare(N);

    return 0;
}
