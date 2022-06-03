#include <stdio.h>

int main(){
    int n;
    int i = 1;
    int sum = 0;
    printf("Enter a value for n:");
    scanf("%d", &n);
    while(i<=n){
        sum = sum + i;
        i++;
    }
    // for(i = 1; i <= n; i++){
    //     sum = sum + i;
    // }
    printf("Sum: %d", sum);
    return 0;
     
}