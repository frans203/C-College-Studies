#include <stdio.h>
#include <stdlib.h>

int main() {
    int currentYear, birthYear;
    printf("Write a current year: ");
    scanf("%d", &currentYear);
    printf("Write your birthday year:");
    scanf("%d", &birthYear);
    printf("Your current age is: %d", currentYear - birthYear);

    return 0;
}