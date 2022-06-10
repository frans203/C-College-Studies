#include <stdio.h>

int main(){
   int values[10];
   int i,j;
   int uniqueCount = 0;
   int foundDuplicate = 0;
   for(int i=0;i<10;i++){
       printf("Enter value #%d: ", i+1);
       scanf("%d", &values[i]);
   }
   for(i=0;i<10;i++){
       for(j=0;j<10;j++){
           if(i == j)
               continue;
           if(values[i] == values[j]){
               foundDuplicate = 1;
               break;
           }
       }
       if(foundDuplicate != 1){ //we didn't find any duplicate value
        printf("Unique value: %d\n", values[i]);
        uniqueCount++;
       }
       foundDuplicate=0;
   }

   printf("Unique Count: %d", uniqueCount);
   return 0;
}