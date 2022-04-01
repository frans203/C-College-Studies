#include <stdio.h>
#include <stdlib.h>

int main() {
    float distance, autonomy, price, totalLiters;
    printf("Set distance:");
    scanf("%f", &distance);
    printf("set autonomy(km/l):");
    scanf("%f", &autonomy);
    printf("set price of fuel per liter: ");
    scanf("%f", &price);
    totalLiters = (distance / autonomy);
    printf("Total price spent: %f", totalLiters * price);

    return 0;
}