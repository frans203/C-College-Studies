#include <stdio.h>

int main(){
   int i, j, k;
   int blankSpaces;
   int n;
   int currentValue = 1;

   printf("Inter n(number of rows for the pyramid)");
   scanf("%d", &n);

   blankSpaces = n-1;
   
   for  (i = 1; i <= n; i++)
   {
       for(k = blankSpaces; k>=1; k--){
           printf(" ");
       }
       for(j = 1; j<=i; j++){
           printf(" %d ", currentValue);
           currentValue+=1;
       }
       printf("\n");
       blankSpaces--;
   }
   
    return 0;
}