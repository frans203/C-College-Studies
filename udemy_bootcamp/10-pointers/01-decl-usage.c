#include <stdio.h>

int main(){
    //remember: pointers stores and ADDRESS of an standard variable
    int *p; //pointer, int represent the type of data to point
    //the '*' indicates not a 'standard variable'; p is the name
    // '&' - address 

    int a = 5; 
    int *x;
    x = &a; //x now represents the address of a
    printf("%d\n", a); //5
    //%p for print and address of a variable and we need to use '&' on the variable for it's address to be show
    printf("variable address: %p\n", &a);//adress of 'a' ex: <88223>
    printf("pointer a: %p \n",x);
    printf("value of a: %d \n", a);
    printf("value of address p: %d \n", *x);
    return 0;
}