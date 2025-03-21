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
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    int largest = -1, secondLargest = -1;

    // Find the largest and second largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  // Update second largest
            largest = arr[i];         // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];   // Update second largest
        }
    }

    // Output the second largest element, or -1 if it doesn't exist
    if (secondLargest == -20) {
        printf("-20\n");
    }
    else if (secondLargest ==-1) {
        printf("-1\n");
    }
    else {
        printf("%d\n", secondLargest);
    }

    return 0;
}
