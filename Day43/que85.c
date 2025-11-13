#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i;
    gets(str);
    while (str[len] != '\0')
        len++;
    for (i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}