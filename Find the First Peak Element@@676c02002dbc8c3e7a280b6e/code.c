#include <stdio.h>

// Function to find the first peak element in the array
int findFirstPeak(int arr[], int n) {
    // Handle boundary conditions
    if (n == 1) {
        return arr[0];  // If there is only one element, it is the peak.
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

    // If no peak element is found, return -1
    return -1;
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    int peak = findFirstPeak(arr, n);
    
    if (peak != -1) {
        printf("The first peak element is: %d\n", peak);
    } else {
        printf("No peak element found.\n");
    }

    return 0;
}
