#include<stdio.h>
#include<ctype.h>

void printMenu(const char *op)
{

	static int i=1;
	printf("\n\n%d. %s",i,op);
	i++;

}


int calc(int c,int a , int b)
{
	switch(c)
	{
		case 1: return a+b;
		case 2: return a-b;
		case 3: if( b==0) return -1;
			else return a/b;
		case 4: return a*b;
	}
	return 0;
}

int getNum(int n)
{
	char inp[20];
	int val,i=0;

	while(1)
	{	fflush(stdin);
		printf("ENTER number %d: ",n);
		fflush(stdin);
		scanf("%s",inp);
		if(inp[i]!='0' && atoi(inp)==0) continue;
		
		val=atoi(inp);
		break;
	}
	return val;
}


	
int main()
{
	int a,b,choice;



	a=getNum(1);
	b=getNum(2);

	printMenu("Add");
	printMenu("Subtract");
	printMenu("Divide");
	printMenu("Multiplication");

	fflush(stdin);
	printf("\n\nENTER CHOICE:");
	scanf("%d",&choice);

	printf("\n THE ANS IS: %d ",calc(choice,a,b));

	return 0;

}
