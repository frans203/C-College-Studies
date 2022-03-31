#include <stdio.h>

int main(void){
    // unsigned short int age, birth_year, curr_year;
    float s, s0, v, t;
    int resultado, operando_1, operando_2, operando_3, operando_4, resultado_float;

    s0 = 10.8;
    v = 12.1;
    t = 120.3;

    operando_1 = 2;
    operando_2 = 3;
    operando_3 = 4;
    operando_4 = 7;

    s = s0 + v * t;
    resultado = (operando_1 + (operando_2 - operando_3)) * operando_4;
    
    printf("Operando 1 %d\n", resultado);
    printf("Espaço Final: %.3f e Resultado %d\n", s, resultado);

    return 0;
}