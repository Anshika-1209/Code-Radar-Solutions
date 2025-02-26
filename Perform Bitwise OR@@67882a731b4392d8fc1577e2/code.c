#include <stdio.h>

int main() {
    int num1, num2, result;

    // Get two integers from the user
    scanf("%d %d", &num1, &num2);

    // Perform bitwise OR operation
    result = num1 | num2;

    // Print the result
    printf("%d\n", result);

    return 0;
}
