#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, max;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    for (i = 0; i <= n - k; i++) {
        max = arr[i];
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d", max);
        if (i != n - k)
            printf(" ");
    }
    printf("\n");
    return 0;
}