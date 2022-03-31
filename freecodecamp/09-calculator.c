#include <stdio.h>
#include <stdlib.h> 

void main(){
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1); //to print/scan intergers: %d, to print doubles %f, if scanning use %lf
    printf("Enter second number:" );
    scanf("%lf", &num2);
    printf("Your answer is: %f", num1 + num2);
}