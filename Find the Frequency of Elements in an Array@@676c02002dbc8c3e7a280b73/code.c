#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop through the array to count the frequency of each element

    for(int i = 0; i < n; i++) {
        int count = 1; // Initialize count as 1 because the element appears at least once
        // Check for duplicate elements
        if(arr[i] != -1) {  // We mark visited elements as -1
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; // Mark as visited
                }
            }
            // Print the element and its frequency
            printf(" %d  %d \n", arr[i], count);
        }
    }

    return 0;
}
