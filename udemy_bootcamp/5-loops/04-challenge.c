#include <stdio.h>

int main (){
    int number, pow;
    int tempPow;
    int result = 1;
    printf("Enter a value to number: ");
    scanf("%d", &number);
    printf("Enter a value to pow: ");
    scanf("%d", &pow);
    tempPow = pow;
    while(pow > 0){
        result = result * number;
        printf("%d \n", result);
        pow--;
    }
    printf("%d in the power of %d = %d", number, tempPow, result);
    

    return 0;
}