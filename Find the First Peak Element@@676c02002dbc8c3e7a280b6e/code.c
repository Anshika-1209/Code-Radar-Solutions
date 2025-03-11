#include <stdio.h>
// Function to find the first peak element in the array
int findFirstPeak(int arr[], int n) {
    // Handle edge case when there is only one element
    if (n == 1) {
        return arr[0];
    } 
    // Check if the first element is a peak
    if (arr[0] > arr[1]) {
        return arr[0];
    }

    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    // Check for peak elements in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }

    // If no peak is found, return -1
    return -1;
}
int main() {
    int n = sizeof(arr) / sizeof(arr[0]);

    int peak = findFirstPeak(arr, n);
    
    if (peak != -1) {
        printf("%d\n", peak);
    } else {
        printf("No peak element found.\n");
    }

    return 0;
}
