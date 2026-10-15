#include<stdio.h>

int main(){
    long long num;
    scanf("%lld",&num);

    long long start = 1;
    long long sum = (num * (num + 1)) / 2;
    printf("%lld", sum);
}