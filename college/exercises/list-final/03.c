#include <stdio.h>
#include <string.h>
#define MAX 5

void searchTitle(char *arrTitles[]) {
     char s[30];  
     printf("Enter the string? ");  
     getchar();
     gets(s);  
     for(int i=0;i<MAX;i++){
        int value = strcmp(s, arrTitles[i]);
        if(value == 0){
            printf("The book you are looking for is: %s \n", arrTitles[i]);
        }
    }
}

void searchISBN(int ISBN[], char *arrTitles[]){
 int search;
 printf("Enter value to search: ");
 scanf("%d", &search);

 for(int i=0;i<MAX;i++){
    if(search == ISBN[i]){
        printf("The book you are looking for is: %s \n", arrTitles[i]);
        
    }
  }
}
int main(){
    char *arrTitles[MAX] = {"Harry Potter", "Senhor dos Aneis", "Hobbit", "Duna", "O Iluminado"};
    int ISBN[MAX] = {123, 356, 222, 333,111};
    int prices[MAX] = {22, 10,5,50,49};
    char option;
        printf("a) search book for title \n");
        printf("b) search book for ISBN\n");
        printf("c) quit program\n");
        printf("Enter value: \n");
        scanf("%c", &option);


     if(option  == 'a'){
         searchTitle(arrTitles);
        }else if(option == 'b'){
         searchISBN(ISBN,arrTitles);
        }

    return 0;
}