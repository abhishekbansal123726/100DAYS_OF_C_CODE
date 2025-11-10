#include <stdio.h>

int main() {
    int n = 4;  // Number of lines in the upper half (excluding mirror)
    int i, j;

    // Upper half of the pattern
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}