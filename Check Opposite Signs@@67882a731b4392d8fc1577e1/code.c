#include <stdio.h>
int checkOppositeSigns(int a, int b) {
    // If the product of a and b is negative, they have opposite signs
    return (a < 0 && b >= 0) || (a >= 0 && b < 0);
}
int main() {
    int num1, num2;
     printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (checkOppositeSigns(num1, num2)) {
        printf("True.\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
