#include <stdio.h>

int main(){
    int n;
    int i;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
       printf("%d ", i * 2);
    }

    // while(i<=n){
    //     printf("%d ", i * 2);
    //     i++;
    // }

    // while(n > 0){
    //     printf("%d ", i);
    //     i +=2;
    //     n = n - 1;
    // }
    return 0;
}