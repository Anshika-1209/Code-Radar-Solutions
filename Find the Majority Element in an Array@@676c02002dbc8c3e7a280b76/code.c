#include <stdio.h>
int findMajorityElement(int arr[], int n) {
    int candidate = -1, count = 0;

    // Phase 1: Find a candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify if the candidate is the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;  // Candidate is the majority element
    } else {
        return -1;  // No majority element
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to find the majority element
    int result = findMajorityElement(arr, n);

    // Output the result
    if (result == -1) {
        printf("\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}
