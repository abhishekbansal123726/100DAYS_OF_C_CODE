 #include <stdio.h>

int main() {
    int arr[100], n, x, i, index = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }
    printf("%d\n", index);
    return 0;
}