#include <stdio.h>
#define PI 3.14   // Giving the value of pi for calculating 

int main() {
    float radius, area, circumference;

    //  Taking the value of radius from user 
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculating area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Displaying the output 
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}