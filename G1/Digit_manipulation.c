#include<stdio.h>

int main(){
	int three_digit;
	
	printf("Input: ");
	scanf("%d",&three_digit);
	
	int hundred = three_digit / 100;
	int tens = (three_digit%100)/10;
	int ones = (three_digit%100)%10;
	
	printf("Hundred: %d\n",hundred);
	printf("Tens: %d\n",tens);
	printf("ones: %d\n",ones);
	printf("Sum = %d",hundred + tens + ones);
}
