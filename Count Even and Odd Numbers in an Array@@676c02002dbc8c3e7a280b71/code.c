#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;
    scanf("%d", &n);

    int arr[n];

    // Take input for array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Output the results
    printf("%d", evenCount);
    printf(" %d", oddCount);

    return 0;
}
