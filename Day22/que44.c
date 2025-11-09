#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // i = 1 to n (each term has numerator = 2*i-1, denominator = 2*i-2+2 = 2*i)
    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;   // odd numbers: 1, 3, 5, 7...
        float denominator = i + (i - 1); // denominator: 1, 4, 6, 8...
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}