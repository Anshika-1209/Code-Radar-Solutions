#include <stdio.h>
int getLowestSetBitPosition(int num) {
    // The lowest set bit of a number can be found using num & -num.
    int position = 1;
    // If the number is zero, there is no set bit.
    if (num == 0) {
        return 0; // No set bits in 0.
    }
  // Loop to find the position of the lowest set bit
    while ((num & 1) == 0) {
        num >>= 1;  // Right shift the number to check the next bit
        position++;  // Increment the position
    }

    return position;
}

int main() {
    int num;
    scanf("%d", &num); 
    // Find the position of the lowest set bit
    int position = getLowestSetBitPosition(num);
    
    // Display the result
    if (position == 0) {
        printf("1\n");
    } else {
        printf("%d\n",0);
    }

    return 0;
}
