#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int number,guess;
	srand(time(NULL));
	number=rand()%100+1;
	
	printf("Estimation [1-100] :"); scanf("%d",&guess);
	
	while(number!=guess){
		if(guess<number){
			printf("Enter a larger value\n");
			printf("Estimation [1-100] :"); scanf("%d",&guess);
		}
		else if(guess>number){
			printf("Enter a smaller value\n");
			printf("Estimation [1-100] :"); scanf("%d",&guess);
		}
		
	}
	printf("Congrats guess right [%d])",guess);
	
	
