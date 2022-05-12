#include <stdio.h>

int main(){
    int sequenceSize;
    int previousValue = 0, currentValue = 0;
    int veryAscendingFlag = 1;

    // printf("Insert size(total size of sequence): ");
    // scanf("%d", &sequenceSize);
    do{
        printf("Insert size(total size of sequence): ");
        scanf("%d", &sequenceSize);
    }
    while(sequenceSize <= 0);
    do{
        printf("Insert Value: ");
        scanf("%d", &currentValue);

        if(currentValue < 0){
            printf("Number isn't positive");
        }else{
            if(currentValue <= previousValue){
                veryAscendingFlag = 0;
                break;
            }
            previousValue = currentValue;
            sequenceSize--;
        }
    } while (sequenceSize > 0);

    if(veryAscendingFlag == 0){
        printf("This sequence is NOT very ascending");
    }else
    {
        printf("This sequence IS, in fact, very ascending");
    }
    return 0;
}