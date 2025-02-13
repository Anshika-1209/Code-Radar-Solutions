#include <stdio.h>

void printSquare(int N) {
    // Loop for each row of the square
    for (int i = 1; i <= N; i++) {
        // Loop for each column of the square
        for (int j = 1; j <= N; j++) {
            printf("* ");  // Print a star
        }
        // Move to the next line after completing one row
        printf("\n");
    }
}

int main() {
    int N;
    
    // Ask user for the side length of the square
    scanf("%d", &N);
    
    // Print the square pattern
    printSquare(N);
    
    return 0;
}
