#include <stdio.h>

void printReverseTriangle(int n) {
    // Loop to print each row
    for (int i = n; i >= 1; i--) {
        // Loop to print numbers in reverse order for each row
        for (int j = i; j >= 1; j--) {
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
