#include<stdio.h>

int main(){
	int age = 17;
	
	if(age>=18){
		printf("You can vote\n");
	}else{
		printf("You cant, wait for %d year",18-age);
	}
}
