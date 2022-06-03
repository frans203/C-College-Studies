#include <stdio.h>

int leapYear(int year){
    if(year % 400 == 0){
        return 1;
    }else if(year % 100 == 0 ){
        return 0;
    }else if(year % 4 == 0){
        return 1;
    }else{
        return 0;
    }
    printf("%d", year);
    return 0;
}

int main(){
    int day, month, year;
    printf("Entere day, month, year \n");
    scanf("%d %d %d", &day, &month, &year);
    if(month % 2 != 0 || month == 10 || month == 12 || month == 8){
        if(day == 31){
            day = 01;
            if(month == 12){
                year++;
                month = 1;
            }else{
                month++;
            }
        }else{
            day++;
        }
            printf("%d/%d/%d", day, month, year);

    }else if(month == 4 || month == 6 || month == 11 || month == 9 ){
         if(day == 30){
            day = 01;
            month++;
        }else{
            day++;
        }
            printf("%d/%d/%d", day, month, year);
    }else if(month == 2){
        if(leapYear(year) == 1){
           if(day == 29){
               day = 1;
               month = 3;
           }else{
               day++;
           }

        }else{
              if(day == 28){
               day = 1;
               month = 3;
           }else{
               day++;
           }
        }
        printf("%d/%d/%d", day, month, year);

    }
    return 0;
}