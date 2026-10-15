#include<stdio.h>

int main(){
	
	int i = 1;
	
	while(i <= 10){
		if(i % 2 != 0){
			printf("Hi");
			continue;
		}
		printf("3 x %d = %d",i,i*3);
		i++;
	}
}
