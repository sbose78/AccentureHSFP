#include<stdio.h>

int calcTime()
{
	float balance=1000000;
	int i=1;
	
	while(balance>0)
	{
		balance+=balance*0.08;
		balance-=100000;
//		printf("%ld",balance);
		i++;
	}
	return i;

}


int main()
{
	printf("%d",calcTime());
	return 0;
}

