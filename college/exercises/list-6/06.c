#include <stdio.h>

int main(){
    int number,reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = number; i !=0; i)
    {
        reversed = reversed * 10;
        reversed = reversed + i%10;
        i = i/10;
    }
    if(reversed==number){
        printf("Is a palindrome");

    }else{
        printf("Is NOT a palindrome");
    }
    
    return 0;
}