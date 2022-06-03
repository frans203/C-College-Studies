#include <stdio.h>

int main(){
    int phoneNumber[7];
    int i;
    for(i = 0; i < 7 ; i++){
        printf("Enter number %d:", i + 1);
        scanf("%d", &phoneNumber[i]);
    }
    int max = phoneNumber[0];
    int maxIndex = 0;
    for(int i = 0; i<7;i++){
        if(phoneNumber[i] > max){
            max = phoneNumber[i];
            maxIndex = i;
        }
    }

    printf("Index of max value is: %d", maxIndex);
    return 0;
}