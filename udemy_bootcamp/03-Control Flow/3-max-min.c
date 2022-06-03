#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    printf("Enter a value for num1: ");
    scanf("%f", &num1);
    printf("Enter a value for num2: ");
    scanf("%f", &num2);
    if(num1 > num2 ){
        printf("Maximum: %.2f \nMinimun: %.2f", num1, num2);
    }else{
         printf("Maximum: %.2f \nMinimun: %.2f", num2, num1);
    }
    return 0;
}