#include <stdio.h>

int main() {
    int seconds, hours, minutes, remSeconds;

    printf("Enter the amount of seconds: ");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds - hours * 3600)/60;
    remSeconds = (seconds - hours * 3600)%60;
    printf("Total hours: %d \n", hours);
    printf("Total minutes: %d \n", minutes);
    printf("Remaining Seconds: %d \n", remSeconds);
    return 0;
}