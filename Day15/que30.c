#include <stdio.h>

int main() {
    int n, rev = 0;
    scanf("%d", &n);   // input the number

    // loop until n becomes 0
    while (n > 0) {
        rev = rev * 10 + n % 10;  // taking last digit and build reverse
        n = n / 10;               // remove last digit
    }

    printf("%d", rev); // print reversed number
    return 0;
}