#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	

	printf("*************************\ntas(1) kagit(2) makas(3)\n*************************");
	int rnumber,guess,counter=3,scoreb=0,scorek=0;
	

	while(counter>0){
		srand(time(NULL));
		rnumber=rand()%3+1;
hamza:	printf("\nMake a choice :"); scanf("%d",&guess);
		if(guess==1 && rnumber==2){
			printf("Computer won");
			scoreb++;
		}
		else if(guess==1 && rnumber==3){
			printf("You won");
			scorek++;
		}
		else if(guess==1 && rnumber==1){
			printf("Draw");
		}
		else if(guess==2 && rnumber==1){
			printf("You won");
			scorek++;
		}
		else if(guess==2 && rnumber==2){
			printf("Draw");
		}
		else if(guess==2 && rnumber==3){
			printf("Computer won");
			scoreb++;
		}
		else if(guess==3 && rnumber==1){
			printf("Computer won");
			scoreb++;
		}
		else if(guess==3 && rnumber==2){
			printf("You won");
			scorek++;
		}
		else if(guess==3 && rnumber==3){
			printf("Draw");
		}
		else{
			printf("Incorrect entry please enter a number from 1-3!");
			goto hamza;
		}
		counter--;
	}
	
	(scoreb>scorek)?printf("\nComputer:%d, Gamer:%d\nComputer won",scoreb,scorek):(scoreb<scorek)?printf("\nComputer:%d, Gamer:%d\nGamer won",scoreb,scorek):printf("\nComputer:%d, Gamer:%d\nDraw",scoreb,scorek);       







	
	
}




