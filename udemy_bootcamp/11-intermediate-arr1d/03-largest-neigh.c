#include <stdio.h>

int main(){
    int arr[5] = {1,4,3,7,1};
    int biggerSum = arr[0] + arr[1];
    for(int i=0;i<5;i++){
        if(i!=0 && i!=4){
            int sum = arr[i] + arr[i+1];
            if(sum>biggerSum){
                biggerSum = sum;
            }
            printf("%d\n", sum);
        }
    }
            printf("BIGGER SUM: %d\n", biggerSum);

    return 0;
}