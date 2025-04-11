#include <stdio.h>
#include <ctype.h>  // For tolower()
#include<string.h>
int countVowels(char str[]) {
    int count = 0;
    
    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert to lowercase to handle both upper and lowercase vowels
        char ch = tolower(str[i]);
        
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str,"\n")] = '\0';
    
    int vowels = countVowels(str);
    
    printf("%d\n", vowels);
    
    return 0;
}
