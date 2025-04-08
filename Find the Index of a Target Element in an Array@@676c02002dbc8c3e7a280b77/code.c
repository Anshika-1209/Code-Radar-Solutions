#include <stdio.h>
int findIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return first occurrence index
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int size, target;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the target element to find: ");
    scanf("%d", &target);
    
    int index = findIndex(arr, size, target);
    
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found in the array.\n");
    }
    
    return 0;
}
