#include <stdio.h>

int stringLength(char str[]){
    int i =0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    char str[50];
    printf("Enter string: ");
    gets(str);
    printf("Length of string %s is: %d", str, stringLength(str));
    return 0;
}