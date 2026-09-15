#include<stdio.h>
#include<limits.h>

int main(){
	
	// chara
	char ch = 65;
	printf("%c\n",ch);
	
	char ch2 = '@';
	printf("%d\n",ch2);
	
	
	int tmp1 = INT_MAX; // integer overflow
	int tmp2 = INT_MIN;
	printf("MAX value %d\n",tmp1);
	printf("MIN value %d\n", tmp2);
	
	long long int tmp3 = 2147483648;
	printf("%lld\n",tmp3);
	// max range of long long
	long long t1 = LLONG_MAX;
	long long t2 = LLONG_MIN;
	printf("LONG MAX %lld\n",t1);
	printf("LONG MIN %lld\n",t2);
	
}
