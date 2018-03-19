// Jake Ohland
//Program that decides what discount you get

#include<stdio.h>

int main(void){
	float subtotal=0;
	float taxamount=0.0615;
	float discount=0;
	float total=0;
	float jacketcost=69.99;
	float jackets=0;

	printf("how many jackets are you puchasing: ");
	scanf("%f", &jackets);
	
	subtotal = jackets*jacketcost;

	if(subtotal<100){
		discount=0.05;
	}
	else if(subtotal>=1000){
		discount=0.25;
	}
	else if(subtotal>=100){
		discount=0.15;
	}
	else{
	printf("Invalid");
	}
	
	printf("Subtotal: $%.2f\n", subtotal);
	printf("Sale Price: %.2f\n", subtotal-(subtotal*discount));
	printf("You saved $%.2f\n", subtotal*discount);
	
	discount = subtotal*discount;
	total= subtotal-discount;
	taxamount=0.0615*total;

	printf("Total: %.2f\n", total+taxamount);
	return 0;
}
