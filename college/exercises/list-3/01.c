#include <stdio.h>

int main() {
    int value, r200, r100, r50, r20, r10, r5, r2, n200, n100, n50, n20, n10, n5, n2;
    printf("Enter a value in brazzilian real: ");
    scanf("%d", &value);
    n200 = value / 200;
    r200 = value % 200;

    n100 = r200 / 100;
    r100 = r200 % 100;

    n50 = r100 / 50;
    r50 = r100 % 50;

    n20 = r50 / 20;
    r20 = r50 % 20;

    n10 = r20 / 10;
    r10 = r20 % 10;

    n5 = r10 / 5;
    r5 = r10 % 5;

    n2 = r5 / 2;
    r2 = r5 % 2;

    if(n200){
        printf("Notes of 200: %d \n", n200);
    }
    if(n100){
        printf("Notes of 100: %d \n", n100);
    }
    if(n50){
        printf("Notes of 50: %d \n", n50);
    }
    if(n20){
        printf("Notes of 20: %d \n", n20);
    }
    if(n10){
        printf("Notes of 10: %d \n", n10);
    }
    if(n5){
        printf("Notes of 5: %d \n", n5);
    }
     if(n2){
        printf("Notes of 2: %d \n", n2);
    }
   
    return  0;
}