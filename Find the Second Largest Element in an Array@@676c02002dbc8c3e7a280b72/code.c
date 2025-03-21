#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Edge case: If the array size is less than 2, return -1
    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[n];

    // Take input for array elements

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest to very low values
    int largest = arr[0];
    int secondLargest = -2147483648; // Set to a very low value (or INT_MIN)

    // Find the largest and second largest elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  // Update second largest
            largest = arr[i];         // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];   // Update second largest
        }
    }

    // Output the second largest element, or -1 if it doesn't exist
    if (secondLargest == -2147483648) {  // Check if secondLargest wasn't updated
        printf("-1\n");
    } else {
        printf("%d\n", secondLargest);
    }

    return 0;
}
