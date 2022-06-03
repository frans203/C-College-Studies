#include <stdio.h>

int main(){
    int num1 = 5, num2 = 7;
    int *ptrA, *ptrB;

    printf("num 1 = %d, num2 = %d \n", num1, num2); //5, 7

    ptrA = &num1;
    ptrB = &num2;
    printf("num address 1 = %p, num address2 = %p \n", ptrA, ptrB );//address of num1, address of num2
    printf("num 1 = %d, num2 = %d \n", *ptrA, *ptrB ); //5,7

    *ptrA = *ptrA + 1; //6
    *ptrB = *ptrB + 3; //10

    printf("num 1 = %d, num2 = %d \n", *ptrA, *ptrB ); //6, 10
    
    ptrA = ptrB; //ptrB and ptrB points to num2;
    ptrB = ptrA; //ptrB points to num2

    printf("num 1 = %d, num2 = %d \n", num1, num2);
    printf("*ptrA = %d, *ptr2 = %d \n", *ptrA, *ptrB);

    num1 = *ptrB;
    num2 = num1 - 3;

    printf("num 1 = %d, num2 = %d \n", num1, num2);






    return 0;
}