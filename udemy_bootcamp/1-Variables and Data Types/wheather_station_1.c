#include <stdio.h>
#include <stdlib.h>

int main() {
    double celsius;
    printf("Enter a Celsius Degree: ");
    scanf("%lf", &celsius );
    printf("Fahrenheit is: %lf", celsius * 1.8 + 32);
    return 0;
}