#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter value for num1:");
    scanf("%d", &num1);
    printf("Enter value for num2:");
    scanf("%d", &num2);
    printf("Enter value for num3:");
    scanf("%d", &num3);
    if(num1 == 0 || num2 == 0 || num3 == 0){
        printf("Error: Cannot divide by zero");
    }else{
    if((num1 % num2 == 0 || num2 % num1 == 0) && (num1 % num3 ==0 || num3 % num1 == 0) && (num2 % num3 == 0 || num3 % num2 ==0)){
        printf("Divisible Numbers! \n");
    }else{
        printf("Not Divisible Numbers! \n");

    }

    }

 
    return 0;
}