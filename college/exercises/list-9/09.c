#include <stdio.h>

int main(){
    int a = 10;
    float b = 21.5;
    char c = 'a';

    int *p_a; 
    float *p_b;
    char *p_c;

    p_a = &a;
    p_b = &b;
    p_c = &c;

    printf("Previous value of a: %d \n", a);
    printf("Previous value of b: %.3f\n", b);
    printf("Previous value of c: %c\n", c);

    *p_a = 20;
    *p_b = 33.2;
    *p_c = 'x';

    printf("New value of a: %d\n", a);
    printf("New value of b: %.3f\n", b);
    printf("New value of c: %c\n", c);


    


    return 0;
}