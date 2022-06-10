#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "test1", strCopy[20], strCon[] = "asdasd",strEqual[] = "test123";
    strlen(str); //length of string
    strcpy(strCopy,str); //copy content //needs sufficient memory
    strcat(strCopy,str); //concatenate
    strcmp(strCopy,str); //compare //-1, str1 less than str2; 0 str1 equal to str2; +1 str1 greater than str2

    printf("%d\n", strlen(str));
    printf("%s\n", strcpy(strCopy,str));
    printf("%s\n", strcat(strCon,str));
    printf("%d\n", strcmp(strEqual,str));

    return 0;
} 