#include <stdio.h>

int main(){
    int arr[2], arr2[2], inter[2] ={0,0}, un[4] ={0,0,0,0};
    for (int i = 0; i < 2; i++)
    {
        printf("Enter value for arr[%d]: \n", i);
        scanf("%d", &arr[i]);
    }
     for (int j = 0; j < 2; j++)
    {
        printf("Enter value for arr2[%d]: \n", j);
        scanf("%d", &arr2[j]);
    }
    //intersection
    for (int k = 0; k < 2; k++){
        for(int a = 0; a < 2; a++){
            if(arr[a] == arr2[k]){
                inter[a] = arr[a];
            }
        }
    }

     //union
    for (int k = 0; k < 2; k++){
        un[k] = arr[k];
    }
    for(int k = 2;k<4;k++){
          un[k] = arr2[k - 2];
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Value of arr[%d]: %d\n", i, arr[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Value of arr2[%d]: %d\n", i, arr2[i]);
    }
     for (int i = 0; i < 2; i++)
    {
        printf("Value of inter[%d]: %d\n", i, inter[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Value of union[%d]: %d\n", i, un[i]);
    }
    
    return 0;
}