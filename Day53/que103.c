#include <stdio.h>

int main() {
    int nums[100], n, i, total = 0, leftSum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total += nums[i];
    }
    for (i = 0; i < n; i++) {
        if (leftSum == total - leftSum - nums[i]) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += nums[i];
    }
    printf("-1\n");
    return 0;
}