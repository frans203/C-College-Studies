#include <stdio.h>
#include <math.h>

int main() {
    int option;
    float space, speed, time, speedI, speedF, acceleration;
    printf("Select an option: \n 1) Space as function of speed & Time \n 2) Space as function of initial speed, acceleration, time \n 3) Final speed as function of acceleration and time\n");
    scanf("%d", &option);
    if(option == 1){
        printf("Set speed: ");
        scanf("%f", &speed);

        printf("Set time: ");
        scanf("%f", &time);

        printf("Space is: %f", speed * time);
    }

    if(option == 2){
        printf("Set initial speed:");
        scanf("%f", &speedI);

        printf("Set time:");
        scanf("%f", &time);

        printf("Set acceleration:");
        scanf("%f", &acceleration);   

        printf("Space is: %f", (speedI * time) + (acceleration * pow(time, 2))/2);
    }

    if(option == 3){
        printf("Set acceleration: ");
        scanf("%f", &acceleration);

        printf("Set time: ");
        scanf("%f", &time);

        printf("Final speed is: %f", acceleration * time);
    }
    return  0;
}