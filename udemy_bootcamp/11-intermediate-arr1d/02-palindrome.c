#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 5
int main(){
    int i;
    int flag = 1; //assuming is a palindrome
    int arr[SIZE] = {1,3,2,3,1};
    for(i=0;i<SIZE/2;i++){
        if(arr[i] != arr[SIZE-1-i]){
            flag=0;
            break;
        }
    }

    if(flag==1){
        printf("The array is a palindrome");
    }else{
        printf("The array is NOT a palindrome");
    }
}