#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];  // to store the binary number

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // loop through each character of the string
    for (int i = 0; i < strlen(binary); i++) {
        // if digit is 1, change it to 0
        if (binary[i] == '1')
            binary[i] = '0';
        // if digit is 0, change it to 1
        else if (binary[i] == '0')
            binary[i] = '1';
    }

    printf("1's Complement: %s\n", binary);

    return 0;
}