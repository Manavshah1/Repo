#include <stdio.h>
#include <string.h>

void naiveStringMatch(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);

    for (int i = 0; i <= n - m; i++) {
        int j;

        // Check if the current substring of text matches the pattern
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == m) {
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main() {
    char text[100];
    char pattern[100];

    printf("Enter the text: ");
    gets(text);

    printf("Enter the pattern: ");
    gets(pattern);

    naiveStringMatch(text, pattern);

    return 0;
}