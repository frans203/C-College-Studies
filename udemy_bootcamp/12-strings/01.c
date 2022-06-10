#include <stdio.h>

int main(){
    char name[] ="Teste teste";
    printf("%s\n", name);

    int i=0;
    while(name[i] != '\0'){
        printf("%c", name[i]);
        i++;
    }
    return 0;
}