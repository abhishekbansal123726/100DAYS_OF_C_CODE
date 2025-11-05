#include <stdio.h>
#include <math.h>   

int main() {
    float principal, rate, time;
    float si, ci;

    // Input principal, rate, and time
    printf("Enter Principal, Rate, and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate Simple Interest
    si = (principal * rate * time) / 100;

    // Calculate Compound Interest
    ci = principal * pow((1 + rate / 100), time) - principal;

    // Display results
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", si, ci);

    return 0;
}
