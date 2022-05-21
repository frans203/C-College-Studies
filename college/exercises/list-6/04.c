#include <stdio.h>

int main(){
    int password = 123;
    int tryPassword, option = 0, caps, multiValue;
    printf("Enter correct password:");
    scanf("%d", &tryPassword);

    if(tryPassword == password){
        do
        {
        printf("1) Display all letters of the alphabet and their values in the ASCII table \n");
        printf("2) Show multiplication table of a number\n");
        printf("3) Out\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
             for (caps = 65; caps < 91; caps++)
            {
                printf("The ASCII value of %c is %d \n", caps, caps);
            }
            break;
        case 2: 
            printf("Enter a value for multiplcation table:");
            scanf("%d", &multiValue);
            for(int i = 1; i <= 10; i++){
              printf("%d X %d = %d\n", multiValue, i, multiValue*i);
            }
            break;
        case 3: 
            break;
        default:
            break;
        }
        } while (option != 3);
        
       
      
    }
    return 0;
}