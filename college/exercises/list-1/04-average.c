#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, num3;
    printf("Set a value for num1: ");
    scanf("%f", &num1);
    printf("Set a value for num2: ");
    scanf("%f", &num2);
    printf("Set a value for num3: ");
    scanf("%f", &num3);
    printf("The average of the 3 numbers are: %f", (num1 + num2 + num3) / 3);
    return 0;
}