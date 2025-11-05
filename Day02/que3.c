#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    // Taking the input values for the length and breadth from the user
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);

    // Calculating area and lenght for the rectangle 
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Giving the output 
    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}
