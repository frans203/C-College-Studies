#include <stdio.h>

int main(){
    int n, sumOdd = 0, currentValue;
    printf("Enter the length on the sequence(n): ");
    scanf("%d", &n);
    for(int i = 1; i<=n;i++){
        printf("Enter Current Value:");
        scanf("%d", &currentValue);
        if(currentValue % 2 != 0){
            sumOdd += currentValue;
        }
    }
    printf("SumOdd: %d", sumOdd);
    return 0;
}