#include <stdio.h>
 
 int main() {
     int num, units, tens, hundreds, reversedNum;

     printf("Enter a 3-digit number:");
     scanf("%d", &num);
     units = num % 10;
     tens = (num / 10 ) % 10;
     hundreds = num / 100;

     reversedNum = units;
     reversedNum = reversedNum * 10 + tens;
     reversedNum = reversedNum * 10 + hundreds;
    
    //  printf("Reversed number: %d%d%d", units, tens, hundreds);

     printf("Reversed number of %d is: %d", num, reversedNum);
    
     return 0;
 }