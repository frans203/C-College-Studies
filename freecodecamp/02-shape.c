#include <stdio.h>
#include <stdlib.h>

int main() {
    char characterName[] = "saint";
    int characterAge = 39;
    printf("my brother is called:\n");
    printf("%s\n", characterName);
    printf("with %i age \n", characterAge); //%d an integer number here
    printf("but %s didn't like the current age to be spoken \n", characterName);
    printf("he wish to have less then %d\n", characterAge);
    characterAge = 25;
    printf("he wish to have like %d\n", characterAge);


    return 0;
}
