#include<stdio.h>

int main(){
	int age;
	char first;
	printf("Enter you age:- ")	;
	scanf("%d",&age);
	printf("Enter first char of your name:- ");
	scanf(" %c",&first);
	
	printf("Age:- %d and First Char:- %c",age,first);
}
