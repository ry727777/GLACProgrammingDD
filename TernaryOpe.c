#include<stdio.h>

int main(){
	
	int a = 10;
	int b = 20;
	int c = 30;
	
	int largest = (a>b && a>c) ? a : (b > c) ? b : c;
	printf("Largest %d: ",largest);
	
//	int a = 10;
//	int b = 20;
//	
//	a > b ? printf("a is larger") : printf("b is larger");

//	printf("Value %d\n",(10/20%10+10-34/23));
	
//	int num = 20;
//	num%2 == 0 ? printf("num is even") : printf("num is odd");
}
