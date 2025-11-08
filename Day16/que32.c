#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    // Reverse the number
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    // Check palindrome
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}