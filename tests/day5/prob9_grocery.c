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
int calculateTotal(char n)
{
	int r1=100,r2=200,r3=300,q=0;

	if(n!='D')printf("\n ENTER QUANTITY: ");	
	scanf("%d",&q);
	
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
	int grand_total=0,status=1;
	
	while(status!=-1)
	{
		char choice=printMainMenu();
		
		status=calculateTotal(choice);
		if(status!=-1) grand_total+=status;
		printf("\n GRAND TOTAL:%d",grand_total);
	}
}	
	
