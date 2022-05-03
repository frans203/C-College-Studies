#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, num3, max, min;
    printf("Set a value for num1: ");
    scanf("%f", &num1);
    printf("Set a value for num2: ");
    scanf("%f", &num2);
    printf("Set a value for num3: ");
    scanf("%f", &num3);

    max = num1;
    max = num2;

    if(num1 > num2 && num1 > num3){
        printf("Maximum is %f", num1);
        if(num2 > num3){
            printf("Minimum is %f", num3);

        }else{
              printf("Minimum is %f", num3);        
        }
    }

    if(num2 > num1 && num2 > num3){
        printf("Maximum is %f", num2);
        if(num1 > num3){
            printf("Minimum is %f", num3);

        }else{
              printf("Minimum is %f", num1);        
        }
    }

    if(num3 > num2 && num3 > num1){
        printf("Maximum is %f", num3);
        if(num1 > num3){
            printf("Minimum is %f", num3);

        }else{
              printf("Minimum is %f", num1);        
        }
    }

    return 0;
}