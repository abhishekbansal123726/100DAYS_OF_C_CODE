#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    // count total digits
    digits = (int)log10(num) + 1;

    // find first digit
    first = num / (int)pow(10, digits - 1);

    // find last digit
    last = num % 10;

    // remove first and last digit to get the middle part
    middle = (num % (int)pow(10, digits - 1)) / 10;

    // form the new number by swapping
    result = last * (int)pow(10, digits - 1) + middle * 10 + first;

    printf("Number after swapping: %d\n", result);

    return 0;
}