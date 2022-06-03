#include <stdio.h>
 
int main() {
    int initDay;
    int initHours, initMinutes, initSeconds;
    int finalDay;
    int finalHours, finalMinutes, finalSeconds;
    int daysDuration, hoursDuration, minutesDuration, secondsDuration;
    char colon1[4], colon2[4], colon3[4], colon4[4], dayString1[10], dayString2[10];
    scanf("%s%d", dayString1, &initDay);
    scanf("%d%s%d%s%d", &initHours, colon1, &initMinutes, colon2, &initSeconds);
    scanf("%s%d", dayString2, &finalDay);
    scanf("%d%s%d%s%d", &finalHours, colon3, &finalMinutes, colon4, &finalSeconds);
    daysDuration = finalDay - initDay;
    hoursDuration = finalHours - initHours;
    minutesDuration = finalMinutes - initMinutes;
    secondsDuration = finalSeconds - initSeconds;
        if(hoursDuration < 0){
            daysDuration--;
            hoursDuration = 24 - (initHours - finalHours);
        }
        if(secondsDuration < 0){
            minutesDuration--;
            secondsDuration = 60 - (initSeconds - finalSeconds);
        }
        if(minutesDuration < 0){
            hoursDuration--;
            minutesDuration = 60 - (initMinutes - finalMinutes);
        }
        printf("%d dia(s) \n", daysDuration);
        printf("%d hora(s) \n",  hoursDuration);
        printf("%d minuto(s) \n", minutesDuration);
        printf("%d segundos(s) \n", secondsDuration );
    
    



    return 0;
}