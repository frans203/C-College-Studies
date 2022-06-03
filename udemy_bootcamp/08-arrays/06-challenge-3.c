#include <stdio.h>

#define MAX 10
int main(){ 
    int i;
    int pullUpsArray[MAX];
    for(i=0;i<MAX;i++){
        printf("enter number of pullups on day %d: ", i + 1);
        scanf("%d", &pullUpsArray[i]);
    }
    for(i=MAX-1;i>=0;i--){
        printf("Number of pullups day %d: %d\n", i +1, pullUpsArray[i]);
    }

    return 0;
}