#include <stdio.h>

long decimalToBinary(int decimalNum){
  long binaryNum = 0;
  int rem, temp = 1;
  while (decimalNum != 0)
  {
      rem = decimalNum % 2;
      decimalNum = decimalNum / 2;
      binaryNum  = binaryNum + rem*temp;
      temp = temp * 10;
  }
  return binaryNum;
  
}

int main(){
    int decimalnum;
    printf("Enter a decimal Number: ");
    scanf("%d", &decimalnum);
    printf("Equivalent Binary Number is: %ld", decimalToBinary(decimalnum));
    return 0;
}

