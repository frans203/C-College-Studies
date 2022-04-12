#include <stdio.h>
#include <math.h>
int main() {
    int num1, num2, num3, num4;
    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Enter num3: ");
    scanf("%d", &num3);

    printf("Enter num4: ");
    scanf("%d", &num4);

    printf("Sum: %d \n", num1 + num2 + num3 + num4);
    printf("num1 * num2 ^num3 / num4: %f \n", (num1 * pow(num2, num3))/num4 );
    printf("Sqr of all 4 numbers power 2: %f \n", sqrt(pow(num1, 2) + pow(num2, 2) + pow(num3, 2) + pow(num4, 2) ));
    printf("num1 Octal: %X \n", num1);
    printf("num2 Octal: %X \n", num2);
    printf("num3 Octal: %X \n", num3);
    printf("num4 Octal: %X \n", num4);

    printf("num1 Hex: %o\n", num1);
    printf("num2 Hex: %o\n", num2);
    printf("num3 Hex: %o\n", num3);
    printf("num4 Hex: %o\n", num4);

    printf("Average: %f", (num1 + num2 + num3 + num4)/4.0);


    return 0;
}