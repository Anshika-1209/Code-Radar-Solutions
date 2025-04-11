#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For tolower()

int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    
    // Loop to check characters from start and end
    while (start < end) {
        // Skip non-alphabet characters (optional, if you want to ignore spaces, punctuation)
        if (!isalnum(str[start])) {
            start++;
        } else if (!isalnum(str[end])) {
            end--;
        } else {
            // Compare characters (case insensitive)
            if (tolower(str[start]) != tolower(str[end])) {
                return 0;  // Not a palindrome
            }
            start++;
            end--;
        }
    }
    return 1;  // It’s a palindrome
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
