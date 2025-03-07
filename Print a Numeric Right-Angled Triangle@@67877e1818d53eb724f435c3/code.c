#include <stdio.h>
void printNumericTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        // Print numbers from 1 to the current row number
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line after each row
    }
}
int main() {
    int N;

    // Take input for number of rows N
    scanf("%d", &N);
    // Call the function to print the numeric print numeric triangle
    printNumericTriangle(N);
    return 0;

}