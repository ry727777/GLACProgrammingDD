
//input: 3.14159 2.71828
//Sum =          5.86

#include<stdio.h>
int main(){
	float a,b,sum;
	printf("input: ");
	scanf("%f%f",&a,&b);
	sum = a+b;
	printf("Sum = %10.2f",sum);
}
