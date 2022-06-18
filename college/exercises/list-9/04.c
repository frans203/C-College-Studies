#include <stdio.h>

float ageDays(int days, int months, int years){
    float newMonths = months * 30.0;
    float newYears = years * 365.0;
    days = days + newMonths + newYears;
    return days;
}

int main(){
    int days, months, years;
    float newDays;

    printf("Enter value for days: ");
    scanf("%d", &days);
    printf("Enter value for months: ");
    scanf("%d", &months); 
    printf("Enter value for years: ");
    scanf("%d", &years);
    newDays = ageDays(days, months, years);
    printf("The age express in days is: %.2f", newDays);
    return 0;
}