#include <stdio.h>
#include <stdlib.h>

int main() {
    double fah;
    printf("Enter a fahrenheit value: ");
    scanf("%lf", &fah);

    printf("Celsius: %lf", (fah - 32.0)/1.8);
    return 0;
}