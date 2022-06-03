#include <stdio.h> 

int main(){
    int n, i = 1, j;
    printf("Enter a value to n:");
    scanf("%d", &n);

    while(i<=n){
        printf("%d", i);
        i++;
    }
    printf("\n");
    for(j = n; j>=1; j--){
        printf("%d", j);
    }
    return 0;

}