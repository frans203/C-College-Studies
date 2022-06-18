#include <stdio.h>

//strcpy (char *strDest, char *strSrc)

char *strcpy(char *destination, char *source){
    char *tempPtr;
    int i=0;
    tempPtr = destination; 
    while(source[i] != '\0'){ //untill we got to the end of the string
      destination[i] = source[i];
      i++;
    }
    destination[i]='\0';
    return tempPtr;
} 

int main(){
    char myNickName[] = "AlphaTech";
    char copyNickName[30];
    char *tempResult;

    tempResult = strcpy(copyNickName, myNickName);

    printf("\n%s\n", tempResult);

    return 0;
} 