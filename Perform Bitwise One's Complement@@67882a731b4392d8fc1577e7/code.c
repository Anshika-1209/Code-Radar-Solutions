#include <stdio.h>
int main() {
    int num, result;
// Get an integer from the user
    scanf("%d", &num);

    // Perform bitwise one's complement operation
    result = ~num;

    // Print the result
    printf("%d\n", result);

    return 0;
}
