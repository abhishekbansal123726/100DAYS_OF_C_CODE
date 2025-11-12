#include <stdio.h>

int main() {
    int r, c, i, j;
    int mat[100][100], trans[100][100];

    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", mat[j][i]);
        printf("\n");
    }

    return 0;
}