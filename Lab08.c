//Jake Ohland
//Lab 08

#include<stdio.h>

int main(){

printf("********** Challenge 1 **********\n");

float f =100;
float c = 0;
	
	do{
		printf("%f\n",f);		
		f-=1;
		c=0.5556*(f-32);
		


	}while(f>=c);//-40 should be answer

	
//done




printf("********** Challenge 2 **********\n");

	float amtDue=0;
	float amtGiven=0;
	float amount=0;

	int hundred=0;
	int fifty=0;
	int twenty=0;
	int ten=0;
	int five=0;
	int one=0;
	int quarter=0;
	int dime=0;
	int nickel=0;
	int penny=0;

	printf("Enter the amount due: ");
	scanf("%f", &amtDue);

	printf("Enter the amount Given: ");
	scanf("%f", &amtGiven);

	amount=amtGiven-amtDue;
	printf("Change Due: $%.2f\n", amount);

	while(amount>0){
		if(amount>100){
			hundred++;
			amount=amount-100.0;
		}
		else if(amount>50){
			fifty++;
			amount=amount-50.0;
		}
		else if(amount>20){
			twenty++;
			amount=amount-20.0;
		}
		else if(amount>10){
			ten++;
			amount=amount-10.0;
		}
		else if(amount>5){
			five++;
			amount=amount-5.0;
		}
		else if(amount>1){
			one++;
			amount=amount-1.0;
		}
		else if(amount>0.25){
			quarter++;
			amount=amount-0.25;
		}
		else if(amount>0.1){
			dime++;
			amount=amount-0.1;
		}
		else if(amount>0.05){
			nickel++;
			amount=amount-0.05;
		}
		else if(amount>0.001){
			penny++;
			amount=amount-0.01;
		}
		else{
			amount=0;
		}
	}

	printf("Hundreds: %d\n", hundred);
	printf("Fifties: %d\n", fifty);
	printf("Twenties: %d\n", twenty);
	printf("Tens: %d\n", ten);
	printf("Fives: %d\n", five);
	printf("Ones: %d\n", one);
	printf("Quarters: %d\n", quarter);
	printf("Dimes: %d\n", dime);
	printf("Nickels: %d\n", nickel);
	printf("Pennies: %d\n", penny);

//done

printf("********** Challenge 3 **********\n");
int x=0;
int y=0;
int counter=0;
int counter1=0;


	for(x=1;x<=100;x++){
		if(x%5!=0){
			y+=x;
			counter++;
		}
		if(x%5==0){
			counter1++;
		}
	}

	printf("Numbers from 1-100 without multiples of 5: %d.\n", y);
	printf("There are %d non-multiples of 5 from 1 to 100.\n", counter);
	printf("There are %d multiples of 5 from 1 to 100.\n", counter1);

//done

printf("********** Challenge 4 **********\n");

	int i=0;
	int j=0;
	int height=0;

	printf("How tall do you want the triangle to be: ");
	scanf("%d",&height);
	
	for(i=0;i<=height;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}

	//done

	return 0;
}
