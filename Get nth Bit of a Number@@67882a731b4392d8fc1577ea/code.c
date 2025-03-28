#include <stdio.h>

// Function to get the nth bit of a number
int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    
    // Get the nth bit
    int bit = getNthBit(num, n);
    
    // Output the result
    printf("%d\n", n, num, bit);
    
    return 0;
}


