#include <stdio.h>

//"1", "-1", "0"

int strcmp(char *str1, char *str2){
    int i=0, flag = 0; 
    while(flag=0){
        if(str1[i] < str2[i]){
            flag = -1;           
        }else if(str1[i] > str2[i]){
            flag = 1; 
        }
        if(str1[i] == '\0'){
            break;
        }
        i++;

    }
    return flag;
}

int main(){
    char str1[] = "AlphaTech";
    char str2[] = "Balphatenis";
    printf("%d", strcmp(str1, str2));
    return 0;
}