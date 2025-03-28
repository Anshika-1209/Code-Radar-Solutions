#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int findSmallestMissingPositive(int arr[], int n) {
    // Handle empty array
    if (n == 0) {
        return 1;
    }

    // 1. Sort the array
    qsort(arr, n, sizeof(int), compare);

    // 2. Iterate through the sorted array
    int expected = 1;
    for (int i = 0; i < n; i++) {
        // Skip non-positive numbers
        if (arr[i] <= 0) {
            continue;
        }

        // Skip duplicate numbers
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        if (arr[i] == expected) {
            expected++; // Found the expected value, so increment expected
        } else if (arr[i] > expected) {
            return expected; // Found a gap, return the missing value
        }
    }

    // 3. If all positive integers are present, return the next positive integer
    return expected;
}

int main() {
    int arr[] = {2,2, 3, 4, 7, 6, 5, -1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = findSmallestMissingPositive(arr, n);
    printf("%d\n", missing);
    return 0;
}

