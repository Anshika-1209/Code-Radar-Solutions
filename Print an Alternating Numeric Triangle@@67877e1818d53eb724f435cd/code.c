#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print alternating 1 and 0 for each row
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1) // If the position is odd, print 1
                printf("1 ");
            else // If the position is even, print 0
                printf("0 ");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
