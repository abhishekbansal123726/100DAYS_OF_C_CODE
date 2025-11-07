#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;   // factorial can be large, so using long long

    // Input number
    scanf("%d", &n);

    // Calculate factorial
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    // Output result
    printf("%lld", fact);

    return 0;
}