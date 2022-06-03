#include <stdio.h>

int main(){
    //my result
    // int num, pow;
    // int tempPow;
    // int result = 1;
    // printf("Enter a value to number: ");
    // scanf("%d", &num);
    // printf("Enter a value to pow: ");
    // scanf("%d", &pow);
    // tempPow = pow;

    // for(pow; pow > 0; pow--){
    //     result = result * num;
    // }
    // printf("%d", result);
    // return 0;

    int num, pow;
    int i;
    int result = 1;
    printf("Enter a value to number: ");
    scanf("%d", &num);
    printf("Enter a value to pow: ");
    scanf("%d", &pow);

    for(i = 1; i <= pow; i++){
        result = result * num;
    }
    printf("%d", result);
    return 0;
}