#include <stdio.h>

// Function to count leading zeros in a 32-bit integer
int countLeadingZeros(unsigned int num) {
    int count = 0;
    
    // Iterate over each bit of the number
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {  // Check if the ith bit is 1
            break;  // Stop once we encounter the first 1
        }
        count++;  // Increment count for each leading 0
    }
    
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    
    // Call function to count leading zeros
    int leadingZeros = countLeadingZeros(num);
    
    // Output the result
    printf("%u\n", num, leadingZeros);
    
    return 0;
}
