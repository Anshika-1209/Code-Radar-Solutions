#include <stdio.h>

int findTargetIndex(int arr[], int n, int target) {
    // Loop through the array to find the target element
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Return the index of the first occurrence
        }
    }
    return -1;  // If target is not found, return -1
}

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    // Call the function to find the target element's index
    int index = findTargetIndex(arr, n, target);

    // Output the result
    if (index != -1) {
        printf("%d\n", target, index);
    } else {
        printf("-1\n", target);
    }

    return 0;
}
