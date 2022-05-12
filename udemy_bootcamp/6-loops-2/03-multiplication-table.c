#include <stdio.h>

int main(){
    int i, n, multi;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("Enter a value for multiplicator: ");
    scanf("%d", &multi);

    for(i = 1; i<=multi; i++){
        printf("%d X %d = %d \n", n, i, n*i);
    }
    return 0;
}