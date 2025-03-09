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
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
    
    return 0;
}
