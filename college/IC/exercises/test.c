#include <stdio.h>

int main(){
	float value, totalPrice = 0;
	int paymentWay;
	do
	{
		printf("Enter Product value:");
		scanf("%f", &value);
		totalPrice = totalPrice + value;
	} while (value > 0 );
	printf("Total price to pay: %.2f\n", totalPrice);
	printf("Way of payment?:\n");
	printf("1)In Cash \n2)Credit Card\n");
	scanf("%d", &paymentWay);
	if(paymentWay == 1){
		printf("Total price with 5 per cent of discount: %.2f", totalPrice * 0.95);
	}else if(paymentWay == 2){
		printf("Total price: %.2f\nValue of 4 installments: %.2f", totalPrice , totalPrice/4);
	}
	return 0;
}