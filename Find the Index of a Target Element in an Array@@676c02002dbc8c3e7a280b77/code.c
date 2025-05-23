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
    scanf("%d", &size);
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    
    int index = findIndex(arr, size, target);
    
    if (index != -1) {
        printf("%d\n", index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
