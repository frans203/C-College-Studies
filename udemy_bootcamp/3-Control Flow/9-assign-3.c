#include <stdio.h>
#include <stdlib.h>

int main() {
    int units, tens, hundreds;
    int number;
    printf("Set a 3 digit number: ");
    scanf("%d", &number);
    units = number % 10;
    hundreds = number / 100;
    tens = (number / 10 ) % 10;
    printf("%d %d %d \n" , units, hundreds, tens);
    if(units > tens && units > hundreds){
        printf("ASCENDING");
    }else{
        printf("NOT ASCENDING");

    }
    return 0;
}