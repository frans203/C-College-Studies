#include <stdio.h>

int main(){
    int arr[4][4];
    for(int i = 0; i<4;i++){
        for(int j = 0;j<4;j++){
            arr[i][j] = i*j;
        }
    }
    for(int i = 0; i<4;i++){
        for(int j = 0;j<4;j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}