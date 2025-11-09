#include <stdio.h>

int main() {
    int n = 5;  // number of rows

    // outer loop for rows
    for (int i = 0; i < n; i++) {
        // print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // print stars
        for (int k = 0; k < n - i; k++) {
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}