#include <stdio.h>

int main() {
    int n, m, i, j;
    int mat[100][100];

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);

    for (int k = 0; k < n + m - 1; k++) {
        if (k % 2 == 0) {
            for (i = 0; i <= k; i++) {
                j = k - i;
                if (i < n && j < m)
                    printf("%d ", mat[i][j]);
            }
        } else {
            for (j = 0; j <= k; j++) {
                i = k - j;
                if (i < n && j < m)
                    printf("%d ", mat[i][j]);
            }
        }
    }

    printf("\n");
    return 0;
}
