#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void getstr(char *s,char *t, char *u)
{
	static char *c="hello";
	 char *d="world";
	 char *e="Happy";

	s=c;	
	printf("\n\n ADDRESS OF THE POINTED:%u",d);

	t=d;
	strcpy(u,e);
	
}
int main()
{

	char *s,*t,*u;
	s=(char *)malloc(10);	
	t=(char *)malloc(10);
	u=(char *)malloc(10);
	
	
	getstr(s,t,u);

	printf("\n\n %u",t);
	printf("\n\n%s , %s , %s",s,t,u);

}
