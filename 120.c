/*Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toSentenceCase(char str[]) {
    int n = strlen(str);

    for (int i = 0; i < n; i++) {
    
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);  
        } else {
            str[i] = tolower(str[i]);  
        }
    }
}

int main() {
    char str[200];
    printf("Enter a string: ");
    
    fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';

    toSentenceCase(str);

    printf("Sentence case: %s\n", str);

    return 0;
}


  
