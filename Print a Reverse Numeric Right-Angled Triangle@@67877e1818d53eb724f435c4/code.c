#include <stdio.h>

void printReverseTriangle(int n) {
    // Loop to print each row
    for (int i = n; i >= 1; i--) {
        // Print numbers starting from 1 up to the current row number i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);  // Print the number
        }
        
        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n;
    
    // Ask user for the height of the triangle
    scanf("%d", &n);
    
    // Print the reverse numeric triangle
    printReverseTriangle(n);
    
    return 0;
}
