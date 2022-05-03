#include <stdio.h>
#include <stdlib.h>

int main(){
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);
    switch (value)
    {
    case 0:
       printf("false");
       break;
    
    default:
        printf("true");
        break;
    }
        return 0;
}