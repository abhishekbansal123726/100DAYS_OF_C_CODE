#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // find sum of all divisors (except the number itself)
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;  // add divisor
        }
    }

    // check if sum of divisors equals the number
    if (sum == num)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}