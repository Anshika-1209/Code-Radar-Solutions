#include <stdio.h>
void printMirroredTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        // Print spaces before stars
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int N;
    // Take input for number of rows N
    scanf("%d", &N);
    // Call the function to print the mirrored triangle
    printMirroredTriangle(N);

    return 0;
}
