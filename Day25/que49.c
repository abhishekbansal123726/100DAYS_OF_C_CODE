#include <stdio.h>

int main() {
    int n = 5;  // number of rows

    // outer loop for rows
    for (int i = n; i >= 1; i--) {
        // inner loop to print numbers from i to n
        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
