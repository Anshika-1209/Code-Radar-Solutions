#include <stdio.h>

void printMultiplicationTable(int num) {
    // Loop to print the multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);  // Print multiplication result
    }
}

int main() {
    int num;
    
    // Ask user for the number to generate its multiplication table
    scanf("%d", &num);
    
    // Print the multiplication table
    printMultiplicationTable(num);
    
    return 0;
}

