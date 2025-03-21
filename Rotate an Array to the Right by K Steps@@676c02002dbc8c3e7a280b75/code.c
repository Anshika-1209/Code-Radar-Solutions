#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    // If K is greater than n, rotate by K % n
    k = k % n;

    // Rotate the array using a temporary array
    int temp[n];

    // Copy last K elements to the beginning of the temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy the first (n - K) elements to the temporary array
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    // Copy the rotated array back into the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);

    // Output the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
