#include <stdio.h>

// Function to count leading zeros and remaining bits in a 32-bit integer
void countLeadingZerosAndRemainingBits(unsigned int num) {
    int leadingZeros = 0;
    
    // If num is zero, all 32 bits are zeros
    if (num == 0) {
        // leadingZeros = 32;
        printf("%d\n", leadingZeros);
        return;
    }
    
    // Count leading zeros
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {  // If we encounter the first 1
            leadingZeros = i;   // Leading zeros is the number of bits before the first 1
            break;
        }
    }

    // The remaining bits are those that represent the number, which is always 32 - leadingZeros
    int remainingBits = 32 - leadingZeros;
    
    // Print leading zeros and the remaining bits count
    printf("%d\n", remainingBits);  // Only print the remaining bits count
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    
    // Call function to count leading zeros and remaining bits
    countLeadingZerosAndRemainingBits(num);
    
    return 0;
}
