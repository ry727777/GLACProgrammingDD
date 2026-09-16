#include<stdio.h>

int main(){
	int initail_balance;
	int deposit_amt;
	int withdraw_amt;
	
	scanf("%d",&initail_balance);
	scanf("%d",&deposit_amt);
	scanf("%d",&withdraw_amt);
	
	int final_balance = initail_balance + deposit_amt - withdraw_amt;
	
	printf("%d",final_balance);
	
}
