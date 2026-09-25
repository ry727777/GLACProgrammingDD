#include<stdio.h>

int main(){
    
    int age = 18;
    
    if(age < 18){
    	if(age < 5){
    		printf("Free Ticket");
		}else{
			printf("Child Ticket");
		}
	}else{
		if(age >= 60){
			printf("Senior Citizen ticket");
		}else{
			printf("Adult ticket");
		}
	}
	
}
