#include <stdio.h>
#define SIZE 5
int main(){
    int arr[5];
    int i;
    int goodN = 0;
    for(i=0; i<SIZE;i++){
        printf("enter number %d: ", i +1);
        scanf("%d", &arr[i]);
    }
    for(i=1; i<SIZE;i++){
        if(arr[i-1]*arr[i+1]==arr[i]){
            goodN = 1;
            break;
        }
    }
    if(goodN == 1){
        printf("good neighboors");
    }else{
        printf("NOT good neighboors");
    }
    return 0;
}