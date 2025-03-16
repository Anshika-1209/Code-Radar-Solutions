#include <stdio.h>

// Function to get the nth bit of a number
int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int main() {
    int num, n;
    
    // Input number and the bit position
    scanf("%d", &num);
    scanf("%d", &n);
    
    // Get the nth bit
    int bit = getNthBit(num, n);
    
    // Output the result
    printf("The %dth bit of %d is: %d\n", n, num, bit);
    
    return 0;
}

