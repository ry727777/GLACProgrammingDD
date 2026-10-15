#include<stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	
	int reve = 0;
	while(num > 0){
		int digit = num % 10;
		reve = 10 * reve + digit;
		num = num /10;
	}
	
	printf("%d", reve);  
}
