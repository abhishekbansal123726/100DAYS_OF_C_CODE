#include <stdio.h>

int main() {
    int n, x, totalSum = 0, leftSum = 0;
    scanf("%d", &n);
    totalSum = n * (n + 1) / 2;
    for (x = 1; x <= n; x++) {
        leftSum += x;
        if (leftSum == totalSum - leftSum + x) {
            printf("%d\n", x);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}