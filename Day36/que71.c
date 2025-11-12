#include <stdio.h>

int main() {
    int r, c, i, j;
    int mat[100][100];

    if (scanf("%d %d", &r, &c) != 2) return 0;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d", mat[i][j]);
            if (j < c-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}