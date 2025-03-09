#include <stdio.h>

int main() {
    int rows;
    
    // Ask for the number of rows

    scanf("%d", &rows);
    
    int num = 1;  // Start with the first number
    
    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print numbers for the current row
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  // Move to the next number
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
