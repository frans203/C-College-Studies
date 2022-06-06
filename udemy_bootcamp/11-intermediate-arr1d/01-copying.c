#include <stdio.h>

int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        printf("enter value for arr[%d]:\n", i);
        scanf("%d", &arr[i]);
    }
    int arrCopy[3];
    for(int i=0;i<3;i++){
        arrCopy[i] = arr[i];
    }
    for(int i=0;i<3;i++){
       printf("arr[%d]: %d\n", i, arr[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
       printf("arrCopy[%d]: %d\n", i, arrCopy[i]);
    }
    return 0;
}