#include<stdio.h>

int main()
{
	int amit_p=1000,anand_p=1000,years=0;
	double amit_b,anand_b;
		

	amit_b=anand_b=1000;

	do{
		years++;
		amit_b+=0.1*amit_p;
		anand_b+= anand_b*0.05;

		printf("\n\nAmit:%lf, Anand:%lf",amit_b,anand_b);
	}while(anand_b<amit_b);

	printf("\nTime=%d",years);

	return  0;



}

