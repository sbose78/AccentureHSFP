#include<stdio.h>

char* getMonthName(int n)
{

	switch(n)
	{
		case 1: return "JAN";
		case 2: return "FEB";
		case 3: return "MAR";
		case 4: return "APR";
		case 5: return "MAY";
		case 6: return "JUNE";
		case 7: return "JULY";
		case 8: return "AUG";
		case 9: return "SEPT";	
		case 10: return "OCT";
		case 11: return "NOV";
		case 12: return "DEC";
	}
	return "INVALID";
}

int main()
{	int n;
	printf("\nEnter month number :\n",n);
	scanf("%d",&n);
	printf("\n\n%s",getMonthName(n));	
}
