#include <stdio.h>

int main(){
    int seconds, hours, minutes, remSeconds;
    printf("Enter a number of seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remSeconds = (seconds % 3600) % 60;

    if(hours < 10 ){
       printf("0");
    }
    printf("%d : ", hours);
    if(minutes < 10){
        printf("0");
    }
    printf("%d : ", minutes);
    if(remSeconds < 10){
        printf("0");
    }
    printf("%d \n", remSeconds);

    // printf("%d : %d : %d", hours, minutes, remSeconds);
    return 0;
}