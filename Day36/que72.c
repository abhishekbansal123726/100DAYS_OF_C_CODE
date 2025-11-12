#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    int mat[100][100];

    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum += mat[i][j];

    printf("%d\n", sum);
    return 0;
}