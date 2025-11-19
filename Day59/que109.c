#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, sum, maxSum = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    for (i = 0; i <= n - k; i++) {
        sum = 0;
        for (j = i; j < i + k; j++)
            sum += arr[j];
        if (sum > maxSum)
            maxSum = sum;
    }
    printf("%d\n", maxSum);
    return 0;
}