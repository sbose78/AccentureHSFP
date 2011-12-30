#include<stdio.h>

char getChoice()
{
	char inp[15];

	while(1)
	{ 	fflush(stdin);
		printf("\n\nENTER CHOICE : ");
		fflush(stdin);
		scanf("%s",inp);
		if(inp[0]!='A' || inp[0]!='B' || inp[0]!='C' || inp[0]!='D')
			break;
	}

	return inp[0];
}

void printMenu(const char *op,char c)
{

	printf("\n\n%c. %s",c,op);

}	

float getAdjustments(int quantity,float gt) // gt is the grand total
{
	float discount=0,shipping=0;

	if(gt>1000) discount=0.5*gt;
	if(quantity<=20) shipping=3.5;
	else if(quantity>=20 && quantity<25) shipping=5;
	else 
	{	
		shipping=10.5 + (quantity-25)*1 ;

	}
	return shipping-discount;
}

char printMainMenu()
{
	int a,b;
	char choice;

	printMenu("To enter quantity of artichokes desired in kgs.",'A');
	printMenu("To enter quantity of beets desired in kgs.",'B');
	printMenu("To enter quantity of carrots desired in kgs.",'C');
	printMenu("QUIT",'D');

	choice=getChoice();

	
	return choice;

}
float calculateTotal(char n, char q)

{
	float r1=2.25,r2=5.65,r3=10.89;


	switch(n)
	{
		case 'A':return q*r1;
		case 'B':return q*r2;
		case 'C':return q*r3;
		case 'D': return -1;
	}
	return -1;
}

int main()
{
	float grand_total=0,status=0;
	int quantity,net_quantity=0;
	
	while(status!=-1)
	{	
		char choice=printMainMenu();

		if(choice!='D')
		{	printf("\nEnter quantity:");
			scanf("%d",&quantity);
			net_quantity+=quantity;
		}

		status=calculateTotal(choice,quantity);
		if(status!=-1)
		{
			 grand_total+=status;
			 printf("\n Current transaction: %f ,  Total %f",status,grand_total);
		}

	}
	printf("\n GRAND TOTAL: %f",grand_total+getAdjustments(quantity,grand_total));

}	
	
