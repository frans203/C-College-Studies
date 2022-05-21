#include <stdio.h>
int main(){
    int number, i = 2;
    int isPrimeNumber = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    while(i < number){
        if(number % i == 0){
            isPrimeNumber = 0;
        }
        i++;
    }

    if(isPrimeNumber == 1 && number > 0 && number !=1 ){
        printf("%d is a prime number", number);
    }else{
        printf("%d is NOT a prime number", number);

    }
    return 0;
}