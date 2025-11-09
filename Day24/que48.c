  #include <stdio.h>

int main() {
    int n = 5;  // number of rows

    // outer loop for rows
    for (int i = 1; i <= n; i++) {
        // inner loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}