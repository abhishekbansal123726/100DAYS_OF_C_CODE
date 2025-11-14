#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}, i = 0;
    gets(str);
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
        i++;
    }
    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            printf("%c\n", str[i]);
            return 0;
        }
        i++;
    }
    printf("No repeating character\n");
    return 0;
}