#include<stdio.h>

int main()
{
	const int sum=100;
	int *p=(int *)&sum;

	*p=101;
	
	
	printf("%d, %d",*p,sum);
//	system("ls");
	return 0;
}
