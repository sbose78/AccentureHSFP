#include<stdio.h>

int getSalary(int n)
{
	int sal[4]={100,150,200,250};
	int cycles=0,excess=0,i,k=4,sal_one_month=0,total_salary=0;

	if(n%4==0) cycles = n/4;
	else{
		 cycles=n/4;
		 excess=n%4;
	}	
	for(i=0;i<k;i++)
	{	
		sal_one_month+=sal[i];
		printf("\nMonth %d:%d",(i+1),sal[i]);
	}
	total_salary=sal_one_month*cycles;
	for(i=0;i<excess;i++)
	{
		total_salary+=sal[i];
	}
	return total_salary;

	
}

int main()
{
	int n;
	printf("ENTER NO. OF WEEKS: \n");
	scanf("%d",&n);
	printf("\n THE MAN GETS A SALARY OF: %d",getSalary(n));
	return 0; 
}
