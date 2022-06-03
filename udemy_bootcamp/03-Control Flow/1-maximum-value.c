#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    printf("Enter a first number: ");
    scanf("%d", &num1);
    printf("Enter a second number: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("maximum value: %d", num1);
    }else{
        printf("maximum value: %d", num2);

    }

    return 0;
}