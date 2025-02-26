#include <stdio.h>
int main() {
    int num;
// Get an integer from the user
    scanf("%d", &num);
// Check the LSB using bitwise AND
    if (num & 1) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
