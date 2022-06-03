#include <stdio.h>

int main() {
    float salaryHours;
    int totalHoursMonth;
    printf("Enter your salary(per hours): ");
    scanf("%f", &salaryHours);
    printf("Enter the total hours worked in a month: ");
    scanf("%d", &totalHoursMonth);
    printf("Total monthly salary: %.2f", totalHoursMonth * salaryHours);

    return 0;
}