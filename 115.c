#include <stdio.h>
#include <string.h>

void checkAnagram(char s[], char t[]) {
    int n1 = strlen(s);
    int n2 = strlen(t);

    if (n1 != n2) {
        printf("Not Anagram\n");
        return;
    }

    int freq[26] = {0};

    // Count frequency for s
    for (int i = 0; i < n1; i++) {
        freq[s[i] - 'a']++;
    }

    // Subtract frequency for t
    for (int i = 0; i < n2; i++) {
        freq[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return;
        }
    }

    printf("Anagram\n");
}

int main() {
    char s[100], t[100];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    checkAnagram(s, t);

    return 0;
}
