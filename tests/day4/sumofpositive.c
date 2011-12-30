#include<stdio.h>

int main()
{
	int i;double sum=0;
	for(i=0;i<10;i++)
	{	int n;
		printf("\nENTER NUMBER %d: ",(i+1));
		scanf("%d",&n);
		if(n<=0)
		{
			i--;
			continue;
		}
		sum+=n;
	}
	printf("\nSUM=%lf",sum);
	return 0;
}
