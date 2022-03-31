#include <stdio.h>
#include <stdlib.h>

int main() {
    int favNum = 90;
    char myChar = 'c'; //remember to use single quotes
    printf("Hello\nWorld\n");
    printf("Hello\"World\n");
    printf("%d\n", 889); //allow to printout an integer
    printf("My favorite Number is %d\n", 25);
    printf("My favorite %s is %d \n", "number", favNum);
    printf("My favorite %s is %f \n", "number", favNum); //%f allow to printout a decimal number. If you put a int inside %f it return 0
    printf("My favorite %c is %f \n",myChar, favNum); //%c allow an SINGLE CHARACTER



    return 0;
}