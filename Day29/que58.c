#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initializing max and min with the first element
    max = min = arr[0];

    // Comparing each element
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}