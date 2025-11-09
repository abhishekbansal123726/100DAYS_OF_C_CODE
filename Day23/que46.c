#include <stdio.h>

int main() {
    int n = 5;  // number of rows and columns

    // outer loop for rows
    for (int i = 1; i <= n; i++) {
        // inner loop for columns
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}