#include <stdio.h>

int main() {
    //3.75
    int distance = 300; //km
    int speed = 80; //km/h
    int hours = distance / speed; //h
    float speedInMinutes = speed / 60.0; //km/min
    float remainingMinutes = (distance % speed) / speedInMinutes;
    printf("The time for driving from A to B will take %d hours and %.2f minutes\n", hours, remainingMinutes);
     


    return 0;
}