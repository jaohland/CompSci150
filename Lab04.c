//Jake ohland
//Calculate how much it would cost to store widgets

#include<stdio.h>

int main (void){

	int widgets=0;
	float storageCost=0;
	float box=0;
	float cost=0;
	float profit=0;
	float salePrice=0;

	printf("Enter the total number of widgets: ");
	scanf("%d", &widgets);

	storageCost=(widgets%25)*0.50;
	box=widgets/25;
	cost=widgets*1.32;
	salePrice=(0.25*1.32)+1.32;
	profit=(box*25)*salePrice-cost-storageCost;

	//printf("It'll cost $%.2f to store the widgets.\n", storageCost);
	//printf("You can ship %.2f boxes of widgets.\n", box);
	//printf("It cost $%.2f to make %d widgets.\n", cost, widgets);

	printf("Overall profit: $%.2f\n", profit);

	return 0;
}
