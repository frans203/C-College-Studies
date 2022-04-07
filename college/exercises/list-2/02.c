#include <stdio.h>

int main() {
    //defining variables
    int num1,num2, num3, num4, num5, sum, evenNumbers;
    //defining initial values for the sum and the quantity of even numbers
    sum = 0;
    evenNumbers = 0;
    //scaning the values
    printf("enter num1: ");
    scanf("%d", &num1);

    printf("enter num2: ");
    scanf("%d", &num2);

    printf("enter num3: ");
    scanf("%d", &num3);

    printf("enter num4: ");
    scanf("%d", &num4);

    printf("enter num5: ");
    scanf("%d", &num5);

    //verifying the values, if they're odd or even
    if(num1 % 2 == 0){
        evenNumbers++;
    }else{
        sum = sum + num1;
    }

    if(num2 % 2 == 0){
        evenNumbers++;
    }else{
        sum = sum + num2;
    }

    if(num3 % 2 == 0){
        evenNumbers++;
    }else{
        sum = sum + num3;
    }

    if(num4 % 2 == 0){
        evenNumbers++;
    }else{
        sum = sum + num4;
    }

    if(num5 % 2 == 0){
        evenNumbers++;
    }else{
        sum = sum + num5;
    }

    //PRINTING the values
    printf("Quantity of Even numbers: %d \n", evenNumbers);
    printf("Sum of all odd numbers: %d \n", sum);
    
    return 0;
}