#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    printf("Give a value to number: ");
    scanf("%d", &number);
    if(number % 2 != 0){
        printf("%d is a odd number", number);
    }else{
        printf("%d is a even number", number);
    }
    return 0;
}