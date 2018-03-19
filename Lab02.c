//Jake Ohland
//Moonbucks Cafe

#include <stdio.h>

int main(void){

	printf("Welcome to Moonbucks Cafe! \n");

	float lbsDecaf=0;
	float lbsRegular=0;
	float costDecaf=0;
	float costRegular=0;
	float tax=0;
	float subtotal=0;
	float total=0;

	lbsDecaf=1.5;
	lbsRegular=1.5;
	costDecaf=6.98;
	costRegular=7.48;
	subtotal=(lbsDecaf*costDecaf)+(lbsRegular*costRegular);
	tax=0.06;
	total=(subtotal*tax)+subtotal;

	printf("Your total before tax is: %.2f\n", subtotal);

	printf("Total tax amount: %.2f\n", subtotal*tax);

	printf("Your Grand total is: %.2f\n", total);

	

}
