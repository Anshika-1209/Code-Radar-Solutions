#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int findSmallestMissingPositive(int arr[], int n) {
    // 1. Sort the array
    qsort(arr, n, sizeof(int), compare);

    // 2. Iterate through the sorted array
    int expected = 1;
    for (int i = 0; i < n; i++) {
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
    int arr[] = {3, 4, -1, 1};
    int arr[]={1,2,0,5,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = findSmallestMissingPositive(arr, n);
    printf("%d\n", missing);
    return 0;
}
