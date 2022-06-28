#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void alphabeticOrder(char *arr[]){
   char temp[100];
   for(int i=0;i<3;i++){
       for(int j=i+1;j<3;j++){
           if(strcmp(arr[i], arr[j])>0){
               strcpy(temp, arr[i]);
               strcpy(arr[i], arr[j]);
               strcpy(arr[j], temp);
           }
       }
   }
   printf("The First String in alphabetic order:\n");
//    for(int i=0;i<3;i++){
//       printf("%s\n",arr[i]);
//    }
   puts(arr[0]);
   printf("The Last String in alphabetic order:\n");
   puts(arr[2]);
  
}

int main(){
  char *arr[3];
    for(int i=0;i<3;i++){
        arr[i] = malloc(1 * sizeof(char)); /* allocates 100 bytes */
        printf("enter value for string arr[%d]: ", i);
        scanf("%99s", arr[i]);
    }
    alphabeticOrder(arr);
   return 0;
}