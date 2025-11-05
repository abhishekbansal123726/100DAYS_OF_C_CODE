#include <stdio.h>

int main() {
    int a, b, akshit;

    // Taking input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swaping using variable "akshit"
    akshit = a;
    a = b;
    b = akshit;

    // Printing output
    printf("After swap: %d %d\n", a, b);

    return 0;
}