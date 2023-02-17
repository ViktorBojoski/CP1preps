#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    int charIndex[128] = {0};

    for (int i = 0; i < n; i++) {
        char currentChar = s[i];
        if (charIndex[currentChar] > start) {
            start = charIndex[currentChar];
        }
        int currentLength = i - start  ;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
        charIndex[currentChar] = i ;
    }

    return maxLength;
}

int main() {
    printf("Enter a string: ");
    char word;
    scanf("%c",&word);
    char str[] = "word";
    int length = lengthOfLongestSubstring(str);
    printf("Length of the longest substring without repeating characters: %d", length);
    return 0;
}
