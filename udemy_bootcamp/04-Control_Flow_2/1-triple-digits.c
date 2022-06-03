#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, units, tens, hundreds;
    printf("Set a value to number: ");
    scanf("%d", &number);
    if(number >= 10 && number <= 99){
        printf("TWO DIGIT NUMBER");
    }else if (number >= 100 && number <= 999) {
        printf("TRIPLE DIGIT");
    }else{
        printf("NOT A TRIPLE/DOUBLE DIGIT");
    }
    return 0;
}