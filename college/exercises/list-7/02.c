#include <stdio.h>
#define SIZE 10
#define INTER_SIZE 20
int main(){
    int arr[SIZE], arr2[SIZE], arrInv[INTER_SIZE];
    for(int i = 0; i<SIZE;i++){
        printf("value for arr[%d]: \n", i);
        scanf("%d", &arr[i]);
    }
     for(int i = 0; i<SIZE;i++){
        printf("value for arr2[%d]: \n", i);
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("Value of arr[%d]: %d\n", i, arr[i]);
    }
     for (int i = 0; i < SIZE; i++)
    {
        printf("Value of arr2[%d]: %d\n", i, arr2[i]);
    }
    int j = 0;

    for(int i = 1; i<INTER_SIZE;i+=2){
        if(j > SIZE){
            break;
        }
        arrInv[i] = arr2[j];
        j++;
    }
    int c = 0;
    for(int i = 0; i<INTER_SIZE;i+=2){
        if(j > SIZE){
            break;
        }
        
        arrInv[i] = arr[c];
        c++;
    }
        

    
     for (int i = 0; i < INTER_SIZE; i++)
    {
        printf("Value of arrInv[%d]: %d\n", i, arrInv[i]);
    }
    
    return 0;
}