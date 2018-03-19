#include<stdio.h>

int main(void){

	int i=0;
	int j=0;
	int space=0;
	int counter=0;
	
// first trinagle

	for(i=0;i<=10;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}

//tree

	for(i=1;i<=17;i=i+2){
		for(space=1;space<=17-i;space=space+2){
			printf(" ");
		}		
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
//trunk
	do{
		for(space=1;space<=7;space++){
			printf(" ");
		}
		for(j=1;j<=3;j++){
			printf("*");
		}
	counter++;
	printf("\n");
	}while(counter<=2);	
	return 0;
}
