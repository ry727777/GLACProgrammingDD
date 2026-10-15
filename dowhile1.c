#include<stdio.h>

int main(){
	int secret = 9;
	int attempt = 0;
	int num;
	do{
		 attempt++;
		printf("Guess no: ");
		scanf("%d", &num);
		
		if(num < secret){
			printf("Too Low\n");
		}else if(num > secret){
			printf("Too High\n");
		}
	}while(secret != num);
	
	printf("Total attempt: %d",attempt);
	
}
