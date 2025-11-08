#include <stdio.h>
#include <math.h>

int main() {
    int num, original, sum = 0, digits = 0, temp, digit;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // Counting number of digits
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    // Calculating sum of powers of digits
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp = temp / 10;
    }

    // Checking Armstrong condition
    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}