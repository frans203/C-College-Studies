#include <stdio.h>

int main() {
    int stars;
    int i = 1;
    printf("Enter a number of Asteriskis: ");
    scanf("%d", &stars);
    while(i <= stars ){
        printf("*");
        i++;
    }
    return 0;
}