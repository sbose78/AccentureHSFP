#include<stdio.h>

int fact( long n)
{
	if(n==0) return 1;
	return n*fact(n-1);
}


int main()
{
	long n;
	printf("Enter a number:");
	scanf("%ld",&n);
	long ans=fact(n);
	printf("%ld",ans);
	return 0;	
}
