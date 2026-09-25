#include<stdio.h>

int main(){
	int a;
	char b;
	float f;
	printf("Input:\t");
	scanf("%d",&a);
	scanf(" %c",&b);
	scanf("%f",&f);
	printf("Roll No: %d | Initial: %c | Marks: %f",a,b,f);
}
