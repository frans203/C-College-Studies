#include <stdio.h>
#include <stdlib.h>

void main() {
    char color[20];
    char pluralNoun[30];
    // char celebrity[40];
    char celebrityF[30];
    char celebrityL[30];

    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);

    printf("Enter a celebrity first name: ");
    scanf("%s", celebrityF);
    // fgets(celebrity, 40, stdin);


    printf("Enter a celebrity second name: ");
    scanf("%s", celebrityL);


    printf("Roses are %s \n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s \n", celebrityF, celebrityL);
    // printf("I love %s", celebrity);

}
