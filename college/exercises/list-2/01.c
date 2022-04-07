#include <stdio.h>

int main() {
    int day, month, year, hours, minutes;
    printf("Enter a day:");
    scanf("%d", &day);
    printf("Enter a month:");
    scanf("%d", &month);
    printf("Enter a year:");
    scanf("%d", &year);
    printf("Enter hours:");
    scanf("%d", &hours);
    printf("Enter minutes:");
    scanf("%d", &minutes);
    if(day < 0 || month < 0 || hours < 0 || minutes < 0 || year < 0){
        printf("Date isn't valid");
    }else{
        if(year % 4 == 0){
                if(year % 100 == 0){
                    if(year % 400 == 0){
                        printf("this year is leap");
                    }else{
                        printf("this year isn't leap");
                    }
                }else{
                    printf("This year is leap");
                }
            }else{
                printf("This year isn't leap");
            }
    }
   
    return 0;
}