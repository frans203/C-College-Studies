#include <stdio.h>

int main(){
    int year, isLeapYear;
    printf("Enter a year:");
    scanf("%d",&year);
    isLeapYear = ((year % 400 == 0) ? (year % 400 == 0) : (year % 4 == 0)) ? 1 : 0;
    if(isLeapYear == 1){
        printf("%d is leap year", year);
    }else{
        printf("%d is NOT leap year", year);
    }
    return 0 ;
}