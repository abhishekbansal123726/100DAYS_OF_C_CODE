#include <stdio.h>

int main() {
    long num;
    int count[10] = {0}; 
    int maxCount = 0, mostFrequentDigit, digit;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    if(num < 0) num = -num; 

    // Counting digits
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("%d\n", mostFrequentDigit);

    return 0;
}