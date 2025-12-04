/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/


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
