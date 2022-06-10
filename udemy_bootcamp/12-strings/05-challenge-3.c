#include <stdio.h>
#include <string.h>

int main(){
    char sentence[30];
    int countWords=1;
    int i;
    printf("Enter String:");
    gets(sentence);

    for(i=0;i<strlen(sentence);i++){
        if(sentence[i] == ' '){
            countWords++;
        }
    }
    printf("Number of words is: %d", countWords);
    return 0;
}