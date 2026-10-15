#include<stdio.h>

int main(){
	
	int choice = 5;
	
	switch(choice){
		case 1:
			printf("Order Pizza\n");
			break;
		case 2:
			printf("Order Burger\n");
			break;
		case 3:
			printf("Cold Drink\n");
			break;
		case 4:
			printf("Water\n");
			break;
		default:
			printf("Invalid Order\n");
	}
}
