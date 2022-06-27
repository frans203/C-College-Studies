#include <stdio.h>

int factorial(int value){
    int temp;
    int fact = value;
    do{
        fact = fact * (value - 1);
        value--;
       
    }while (value > 1);
    
    return fact;
}


int main(){
    int value;
    printf("Enter a value:");
    scanf("%d",&value);
    int fact = factorial(value);
    printf("Factorial of %d is:%d",value, fact);
    
    return 0;
}