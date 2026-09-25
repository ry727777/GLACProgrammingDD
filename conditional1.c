#include<stdio.h>

int main(){
	float price = 600;
	
	// if price >= 500 then 10% discount
	if(price >= 500){
		// discount
		price=price-price*0.1;
	}
	printf("Total price %f",price);
	
}
