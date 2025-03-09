#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    // Loop to print numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);  // Print the current number
    }

    // Newline for cleaner output
    printf("\n");

    return 0;
}
