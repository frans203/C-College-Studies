#include <stdio.h>

int main(){
    int num;
    int i;

    printf("Enter a number:");
    scanf("%d", &num);

    for(i = 1; i <= num; i=i+2){
        printf("%d", i);
    }
    return 0;
}