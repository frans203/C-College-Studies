#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter string: \n");
    gets(str);
    for(int i=0;i<strlen(str);i++){
       switch (str[i])
       {
        case 'a':
            str[i] = 'A';
            break;
        case 'e':
            str[i] = 'E';
            break;
        case 'i':
            str[i] = 'I';
            break;
        case 'o':
            str[i] = 'O';
            break;
        case 'u':
            str[i] = 'U';
            break;
        case 'A':
            str[i] = 'a';
            break;
        case 'E':
            str[i] = 'e';
            break;
        case 'I':
            str[i] = 'i';
            break;
        case 'O':
            str[i] = 'o';
            break;
        case 'U':
            str[i] = 'u';
            break;
       
       default:
           break;
       }
    }
    printf("\n Modified String: \n");
    puts(str);
    return 0;
}