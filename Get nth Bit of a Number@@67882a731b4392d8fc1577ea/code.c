#include <stdio.h>
int getNthBit(int num, int n) {
    // Shift num to the right by 'n' positions and AND with 1
    return (num >> n) & 1;
}
int main() {
    int num, n;
    // Take input for the number and the bit position
    scanf("%d", &num);
    scanf("%d", &n);
    // Ensure that n is within the valid range for a 32-bit integer
    if (n < 0 || n >= 32) {
        printf("1\n");
        return 1;
    }
    // Get the nth bit and display the result
    int bitValue = getNthBit(num, n);
    // printf("The value of the %dth bit is: %d\n", n, bitValue);

    return 0;
}
