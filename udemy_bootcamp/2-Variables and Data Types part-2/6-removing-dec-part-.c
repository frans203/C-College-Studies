#include <stdio.h>

int main() {
    float data;
    printf("Set a number: ");
    scanf("%f", &data);
    printf("Interger part: %d \n", (int)data);
    printf("Decimal part is: %.2f \n", data - (int)data);
    return 0;
}