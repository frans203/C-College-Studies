#include <stdio.h>

int main(){
    int day, month, year;
    char stringMonth[100];
    printf("Dia mes e ano: \n");
    scanf("%d %d %d", &day, &month, &year);

    if(month == 1){
        printf("%d de Janeiro de %d", day, year);
    }else if(month == 2){
        printf("%d de Fevereiro de %d", day, year);
    }else if(month == 3){
        printf("%d de Março de %d", day, year);
    }else if(month == 4){
        printf("%d de Abril de %d", day, year);
    }else if(month == 5){
        printf("%d de Maio de %d", day, year);
    }else if(month == 6){
        printf("%d de Junho de %d", day, year);
    }else if(month == 7){
        printf("%d de Julho de %d", day, year);
    }else if(month == 8){
        printf("%d de Agosto de %d", day, year);
    }else if(month == 9){
        printf("%d de Setembro de %d", day, year);
    }else if(month == 10){
        printf("%d de Outubro de %d", day, year);
    }else if(month == 11){
        printf("%d de Novembro de %d", day, year);
    }else if(month == 12){
        printf("%d de Dezembro de %d", day, year);
    }else{
        printf("Erro nos valores, tente de novo");
    }
    return 0;
}