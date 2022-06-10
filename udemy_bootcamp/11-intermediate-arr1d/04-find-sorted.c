#include <stdio.h>
#define SIZE 5
int main(){
    int arr[SIZE];
    int sortedPoints = 2;
    for(int i=0;i<SIZE;i++){
        printf("enter value for index arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<SIZE;i++){
        if((i != SIZE - 1) &&( arr[i] >= arr[i+1])){
            sortedPoints--;
        }
        if(sortedPoints == 0){
            break;
        }
    }
    printf("%d\n",sortedPoints);
    if(sortedPoints == 2){
        printf("Really sorted");
    }else if(sortedPoints == 1){
        printf("Sorted");
    }else if(sortedPoints == 0){
        printf("Not Sorted");
    }
    return 0;
}