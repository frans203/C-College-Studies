#include <stdio.h>

int main(){
    int cellphone[7];
    int maximumValue;
    int i;
    for(i=0;i < 7;i++){
        printf("Enter digit No. %d: ", i + 1);
        scanf("%d", &cellphone[i]);
    }
    maximumValue = cellphone[0];
    for(i = 0; i < 7; i++){
        if(maximumValue < cellphone[i]){
            maximumValue = cellphone[i];
        }
    }

    printf("Maximum value is: %d", maximumValue);
    return 0;
}