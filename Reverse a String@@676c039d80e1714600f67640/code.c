#include <stdio.h>
#include <string.h>
void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;    
    // Swap characters from start to end
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    reverseString(str);
    
    printf("%s\n", str);
    
    return 0;
}
