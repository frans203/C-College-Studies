#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    long int dec;
    printf("Enter a decimal value: ");
    scanf("%d", &dec);
    printf("Equivalent Hex number is: %X \n", dec);
    printf("Equivalent Oct number is: %o \n", dec);
    return 0;
}