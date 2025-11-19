#include <stdio.h>

int main() {
    int nums[100], n, i, j, prod;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    printf("[");
    for (i = 0; i < n; i++) {
        prod = 1;
        for (j = 0; j < n; j++) {
            if (i != j)
                prod *= nums[j];
        }
        printf("%d", prod);
        if (i != n - 1)
            printf(",");
    }
    printf("]\n");
    return 0;
}