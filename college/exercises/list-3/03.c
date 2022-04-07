#include <stdio.h>
#include <math.h>

int main() {
    int option;
    float space, velocity, time, velocityI, velocityF, acceleration;
    printf("Select an option: \n 1) Space as function of Velocity & Time \n 2) Space as function of initial velocity, acceleration, time \n 3) Final velocity as function of acceleration and time\n");
    scanf("%d", &option);
    if(option == 1){
        printf("Set velocity: ");
        scanf("%f", &velocity);

        printf("Set time: ");
        scanf("%f", &time);

        printf("Space is: %f", velocity * time);
    }

    if(option == 2){
        printf("Set initial velocity:");
        scanf("%f", &velocityI);

        printf("Set time:");
        scanf("%f", &time);

        printf("Set acceleration:");
        scanf("%f", &acceleration);   

        printf("Space is: %f", (velocityI * time) + (acceleration * pow(time, 2))/2);
    }

    if(option == 3){
        printf("Set acceleration: ");
        scanf("%f", &acceleration);

        printf("Set time: ");
        scanf("%f", &time);

        printf("Final velocity is: %f", acceleration * time);
    }
    return  0;
}