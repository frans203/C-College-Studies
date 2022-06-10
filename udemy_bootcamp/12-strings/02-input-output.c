#include <stdio.h>

int main(){
    char string[50], str[100];
    // scanf("%9s", string); //only reads the first 9 elements in this case
    // printf("%s", string);

    //DIFFERENCE SCANF AND GETS 
    //scanf reads the first word, gets use the entire text
    gets(str);
    puts(str); // equal printf("%s", str); by default puts appends a new line
    //printf allows further formatting
    return 0;
}