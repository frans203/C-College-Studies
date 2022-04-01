#include <stdio.h>
#include <stdlib.h>

int main() {
    float fah, cel;
    printf("Set a Fahrenheit degree:");
    scanf("%f", &fah);
    printf("The celsius value is: %f", (fah - 32.0) * 5.0 / 9.0);
    return 0;
}