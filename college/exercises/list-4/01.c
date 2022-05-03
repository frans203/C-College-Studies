#include <stdio.h>
#include <stdlib.h>

int main () {
    float num1, num2, num3;
    printf("Set a value for first number: ");
    scanf("%f", &num1);
    printf("Set a value for second number: ");
    scanf("%f", &num2);
    printf("Set a value for third number: ");
    scanf("%f", &num3);
    if(num1 > num2 && num1 > num3){
        printf("%.2f is the bigger value", num1);
    }
    if(num2 > num1 && num2 > num3){
        printf("%.2f is the bigger value", num2);
    }
    if(num3 > num2 && num3 > num1){
        printf("%.2f is the bigger value", num3);
    }
    return 0;
}