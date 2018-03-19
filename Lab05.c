#include <stdio.h>

int main(void){

	srand(time(NULL));

	int randomNumber=rand()%10+1;
	int guess;
	int correct=0;

	printf("Guess a number: ");

	do{
		scanf("%d", &guess);
		if(guess == randomNumber){
			printf("The number you guessed is correct!\n");
			correct = 1;
		}

		if(guess < randomNumber){
			printf("Too low\n");
			printf("Guess again: ");
		}

		if(guess > randomNumber){
			printf("Too high\n");
			printf("Guess again: ");
		}
	}while(correct == 0);

	return 0;
}
