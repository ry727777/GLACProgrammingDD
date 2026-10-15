#include<stdio.h>

int main(){
	int secret = 7;
	int attempt = 0;
	int num;
	do{
		attempt++;
		printf("Guess no: ");
		
		scanf("%d", &num);
		
		if(num < secret){
			printf("Too low, Try Again !\n");
		}
		else if(num > secret){
			printf("Too high, Try Again !\n");
		}	
	}while(num != secret);
	
	printf("You win, total attempt: %d",attempt);
	
}
