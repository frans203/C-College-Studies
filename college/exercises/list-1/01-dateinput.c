#include <stdio.h>
#include <stdlib.h> 

int main() {
    int date, month, year;
    printf("Enter a date:");
    scanf("%d", &date);
    printf("Enter a month:");
    scanf("%d", &month);
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("The current date is: %d / %d / %d", date, month, year);
    return 0;
}