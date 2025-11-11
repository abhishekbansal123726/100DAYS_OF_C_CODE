#include <stdio.h>

int main() {
    int n, i;
    int arr[100], max, secondMax;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = secondMax = -2147483648;

    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    printf("%d\n", secondMax);

    return 0;
}