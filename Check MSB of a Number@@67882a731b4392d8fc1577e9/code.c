#include <stdio.h>
int checkMSB(int num) {
    // Shift the number 31 times to the right and check if the MSB is set
    return (num >> 31) & 1;
}
int main() {
    int num;
    
    // Take input from the user
    scanf("%d", &num);
    
    // Check if MSB is set and display the result
    if (checkMSB(num)) {
        printf("MSB is set (1).\n");
    } else {
        printf("MSB is not set (0).\n");
    }
    
    return 0;
}
