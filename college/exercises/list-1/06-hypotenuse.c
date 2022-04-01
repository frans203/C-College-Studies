#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float sideA, sideB;
    printf("Set the first side: ");
    scanf("%f", &sideA);
    printf("Set the second side: ");
    scanf("%f", &sideB);
    printf("The hypotenuse of the triangle is: %f", sqrt(pow(sideA, 2) + pow(sideB, 2)));
    return 0;
}