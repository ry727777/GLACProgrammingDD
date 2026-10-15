#include<stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	
	int a = 2;
	while(a < num){
		if(num % a == 0){
			printf("Not Prime");
			break;
		}
		a++;
	}
}
