#include <stdio.h>

int main() {
    float num1, num2, temp;
    num1 = 32;
    num2 = 54;
    printf("Values before the swap: a=%f b=%f \n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Values after the swap: a=%f b=%f \n", num1, num2);

    return 0;
}