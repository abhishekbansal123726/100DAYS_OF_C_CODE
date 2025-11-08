#include <stdio.h>

int main() {
    int a, b, tempA, tempB, gcd, lcm;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Finding GCD using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // LCM formula: (a * b) / GCD
    lcm = (tempA * tempB) / gcd;

    printf("%d\n", lcm);

    return 0;
}