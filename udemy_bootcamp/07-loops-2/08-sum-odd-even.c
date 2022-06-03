#include <stdio.h>

int main(){
    int num;
    int currentDigit;
    int evenSum = 0, oddSum = 0;
    printf("Enter num: ");
    scanf("%d", &num);

    // do
    // {
    //     value = value / 10.0;
    //     printf("%.2f \n", value);
    // } while (value > 1);
    

    while (num > 0){
        currentDigit = num  % 10;
        printf("currentDigit: %d \n", currentDigit);
        if(currentDigit % 2 == 0){
            evenSum += currentDigit;
        }else{
            oddSum += currentDigit;
        }
        num = num / 10.0;
        // printf("%.2f \n", (float)num / 10.0);
    }

    printf("Even: %.2f \n", (float)evenSum);
    printf("Odd: %d \n", oddSum);
    // printf("%f", 1999 / 10)
    return 0;
}