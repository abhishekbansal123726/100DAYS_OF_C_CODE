#include <stdio.h>

int main() {
    int a, b, c;

    // Input side lengths
    scanf("%d %d %d", &a, &b, &c);

    // Check type of triangle
    if (a == b && b == c) {
        printf("Equilateral\n");
    } 
    else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } 
    else {
        printf("Scalene\n");
    }

    return 0;
}