#include<stdio.h>

int main(){

	int threatLevel[7];
	int number=0;
	int attempt=0;
	int i=0;
	int total=0;
	int average=0;
	float average2=0;

	do{
		do{
			printf("What is the threat level: \n");
			scanf("%d",&number);
			
			if(number>5 || number<1){
				printf("Incorrect entry");
				attempt=1;
			}
			else{
				attempt=0;
			}
		threatLevel[i]=number;
		}while(attempt==1);
	i++;
	}while(i!=7);
		i=0;
		do{
			total+=threatLevel[i];
			i++;
		}
		while(i!=7);
		average=total/7;
		average2=(float)total/7;
		
		switch(average){
			case 1:
			printf("Green\n");
			break;
			case 2:
			printf("Blue\n");
			break;
			case 3:
			printf("Yellow\n");
			break;
			case 4:
			printf("Orange\n");
			break;
			case 5:
			printf("Red\n");
			break;
	}

	printf("Average %f\n", average2);
	return 0;
}
