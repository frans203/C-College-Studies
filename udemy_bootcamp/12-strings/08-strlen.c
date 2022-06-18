#include <stdio.h>

int strlen(char *str){
    int i;
    while(str[i] != '\0'){
        i++;
    }
    return i; //returing the size of the string
}

int main(){

    return 0;
}