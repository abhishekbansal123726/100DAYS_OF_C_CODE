#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap without third variable (using arithmetic)
    a = a + b;  //adding  both numbers
    b = a - b;  //subtract new b from sum → gives original a
    a = a - b;  //subtract new b from sum → gives original b

    // Display result
    printf("After swap: %d %d\n", a, b);

    return 0;
}
