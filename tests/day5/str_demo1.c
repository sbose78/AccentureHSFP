#include<stdio.h>
#include<string.h>

int main()
{

	char s[400],*p;
	scanf("%s",s);

	p=strtok(s,","); //NULL PLACED
	
	
	printf("\n %s",p);
		printf("\n\n%d",strlen(s));
	}
	return 0;
}
