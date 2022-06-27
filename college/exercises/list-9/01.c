#include <stdio.h>
#define QNT_PRODUCTS 10
#define SIZE_DESC 100

typedef struct {
    int code;
    float price;
    char description[SIZE_DESC];
} t_product;

t_product products[QNT_PRODUCTS];
int cad_products = 0;

void enter_product(){
    if(cad_products >= QNT_PRODUCTS){
        printf("Not possible to add more products \n");
        return;
    }
    printf("Enter product code: ");
    scanf("%d", &products[cad_products].code);
    printf("Enter price of the product: ");
    scanf("%f", &products[cad_products].price);
    printf("Enter description of the product: ");
    getchar();
    gets(products[cad_products].description);
    cad_products++;
}

void list_products(){
    if(cad_products > 0){
        printf("Code\tPrice\tDescription\n");
        for(int i=0;i<cad_products;i++){
            printf("%d\t%.2f\t%s\n", products[i].code, products[i].price, products[i].description);
        }
    }else{
        printf("There's no products registered");
    }
}

void consult_code(){
    if(cad_products>0){
        int code;
        printf("Enter code product: ");
        scanf("%d",&code);
        for(int i=0;i<cad_products;i++){
            if(code == products[i].code){
                printf("Found a product with code %d\n", code);
                printf("Code\tPrice\tDescription\n");
                printf("%d\t%.2f\t%s\n", products[i].code, products[i].price,products[i].description);
                return;
            }
        }
        printf("Product not found");
    }else{
        printf("There's no products registered");
    }
}

void calc_average(){
    if(cad_products>0){
        float sum = 0;
        for(int i=0;i<cad_products;i++){
            sum = sum + products[i].price;
        }
        printf("The average of the products is: %.2f", sum/cad_products);
    }else{
        printf("There's no registered products");
    }
    
}

int main(){
    int option;
    do{
        printf("\n\n");
        printf("1 - Enter product \n");
        printf("2 - List products\n");
        printf("3 - Consult price and description by product code\n");
        printf("4 - Calc average of products prices\n");
        printf("5 - out \n");
        printf("Option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            enter_product();
            break;
        case 2:
            list_products();
            break;
        case 3:
            consult_code();
            break;
        case 4: 
            calc_average();
            break;
        default:
            break;
        }
        
    }while (option !=5);
    
    
    return 0;
}
