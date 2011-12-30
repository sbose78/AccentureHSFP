#include<stdio.h>

typedef struct
{
	int day;
	int month;
	int year;
}mydate;

int isValid(int day,int month,int year)
{
	if((year <=0) || (month <=0 || month>12))
	{	printf("\n stuck at 1 %d %d %d",day ,month, year);
		 return 0;
	}
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(day<0 || day>31) return 0;
			else return 1;
	
		case 2:
			if(day<0 || day>29) return 0;	
			else return 1;
		default:
			if(day<0 || day>30) return 0;
	}
	return 1;
}

void getDate(mydate *dt)
{
	while(1)
	{	int d,m,y;
		printf("\n Enter day,month,year: ");
		scanf("%d %d %d",&d,&m,&y);
		if(!isValid(d,m,y))continue;
		dt->day=d;
		dt->month=m;
		dt->year=y;
		break;
	}
}

int calcAge(mydate *dob,mydate *today)
{
	int ydiff,mdiff,ddiff;

	ydiff= today->year - dob->year ;
	
	mdiff= today->month - dob->month;
	if(mdiff<0)
	{
	 ydiff--;
         mdiff+=12;
	}
	
	ddiff= today->day - dob->day;

	if(ddiff<0)
	{	
		if(mdiff<0 || ydiff<0) return -1;
	
			ddiff+=30;
 			mdiff--;
	}	
	
	
	
	ddiff=abs(ddiff);

	if(ydiff<0 || mdiff<0 || ddiff<0) return -1;
	printf("%d years, %d months , %d days",ydiff,mdiff,ddiff);
	return 1;
	
}
int main()
{
   int status=-1;
   while(status==-1)
   {	
	mydate *dob;
	dob=malloc(sizeof(mydate*));

	printf("\n\n ******** DATE OF BIRTH *****");
	getDate(dob);
	
	mydate *today;
	today=malloc(sizeof(mydate*));

	printf("\n\n ******** TODAY'S DATE *********");
	getDate(today);
	status=calcAge(dob,today);
   }
}
