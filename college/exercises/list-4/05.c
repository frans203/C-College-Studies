#include <stdio.h>
#include <stdlib.h>


int main(){
    int option, num1, octal;
    char hex[17];
    
    printf("Select an option to convert \n1: decimal to hexadecimal\n2: hexadecimal to decimal\n3: decimal to octal\n4: octal to decimal \n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("Enter the decimal to convert: ");
        scanf("%d", &num1);
        printf("Converted to hexadecimal: %X", num1);
        break;
    case 2:
        printf("Enter the hexadecimal to convert: ");
        scanf("%s", hex);
        printf("Converted to decimal: %ld", strtol(hex, NULL, 16));
        break;
     case 3:
        printf("Enter the decimal to convert: ");
        scanf("%d", &num1);
        printf("Converted to octal: %o", num1);
        break;
      case 4:
        printf("Enter the octal to convert: ");
        scanf("%o", &octal);
        printf("Converted to octal: %d", octal);
        break;
    
    default:
        break;
    }

    return 0;
}