#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1;
    double num2;
    char op;

    printf("Enter a number:  ");
    scanf("%lf", &num1); //scan for a double is %lf
    printf("enter operator(+,/,-,*): ");
    scanf(" %c", &op); //if you need to scan a letter put a space in front of %c
    printf("enter a second numer:");
    scanf("%lf", &num2);

    //OBS: double quotes are used for strings in C, single quotes are use for single characters only

    if(op == '+'){
        printf("%f", num1 + num2);
    }else if(op == '-'){
        printf("%f", num1 - num2);
    }else if(op == '/'){
        printf("%f", num1 / num2);
    }else if(op == '*'){
        printf("%f", num1 * num2);
    }else{
        printf("Not valid operator");
    }
    return 0;
}