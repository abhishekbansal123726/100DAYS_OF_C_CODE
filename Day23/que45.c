#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // loop for n terms
    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i;          // numerator = 2, 4, 6, 8, ...
        float denominator = 4 * i - 1;    // denominator = 3, 7, 11, 15, ...
        sum += numerator / denominator;   // add each term to sum
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}

