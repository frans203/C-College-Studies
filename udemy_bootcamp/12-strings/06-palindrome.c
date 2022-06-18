#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int len;
    int isPalindrome = 1; //1 yes 0 no
    printf("Enter string: ");
    scanf("%s", str);
    len = strlen(str);

    for(int i=0;i<len;i++){
        if(str[i] != str[len-1-i]){
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome == 1){
        printf("String is a palindrome");
    }else{
        printf("String is NOT a palindrome");
    }
    
    return 0;
}