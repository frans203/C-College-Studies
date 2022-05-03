#include <stdio.h>
#include <stdlib.h>

int main() {
    char value;
    printf("Enter a character symbol: ");
    scanf("%c", &value);
    if(value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u' ){
        printf("vowel");
    }else{
       printf("consonant");
       return 0;
    }
    
    return 0;
}