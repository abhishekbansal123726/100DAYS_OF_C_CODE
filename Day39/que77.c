#include <stdio.h>

int main() {
    int n, i, j, k, distinct = 1;
    int mat[100][100], diag[100];

    scanf("%d %d", &n, &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++)
        diag[i] = mat[i][i];

    for (i = 0; i < n; i++)
        for (k = i + 1; k < n; k++)
            if (diag[i] == diag[k])
                distinct = 0;

    printf(distinct ? "True\n" : "False\n");
    return 0;
}