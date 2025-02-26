#include <stdio.h>

int main() {
    int num, shift, result;

    // Get an integer and the number of positions to shift from the user
    scanf("%d", &num);
    scanf("%d", &shift);

    // Perform bitwise left shift operation
    result = num << shift;

    // Print the result
     printf("%d\n", result);

    return 0;
}
