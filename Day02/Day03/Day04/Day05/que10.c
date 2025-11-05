#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // User giving Input  time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Converting to hours:minutes:seconds
    hours = totalSeconds / 3600;              // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;     // remaining minutes
    seconds = totalSeconds % 60;              // remaining seconds

    // Giving output
    
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}