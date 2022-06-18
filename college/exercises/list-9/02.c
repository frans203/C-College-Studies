#include <stdio.h>

int verifyNumbers(int n1, int n2, int n3){
    if(n1 < n2 && n1 < n3){
        return n1;
    }else if(n2 < n1 && n2 < n3){
        return n2;
    }else if(n3 < n2 && n3 < n1){
        return n3;
    }
    return 0;
}

int main(){
    int n1, n2,n3, smaller;
    printf("enter value for n1:");
    scanf("%d", &n1); 
    printf("enter value for n2:");
    scanf("%d", &n2); 
    printf("enter value for n3:");
    scanf("%d", &n3);
    smaller = verifyNumbers(n1,n2,n3);

    printf("Smaller number is: %d", smaller);
    return 0;
}