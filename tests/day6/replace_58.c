#include<stdio.h>

int main()
{
	char original[100],changed[100];
	int i=0,j=0;
	printf("ENTER A STRING: ");
	gets(original);

	for(i=0;original[i]!='#';i++)
	{
		if(original[i]=='.')
		{
			changed[j++]='!';
		}
		else if(original[i]=='!')
		{
			changed[j++]='!';
			changed[j++]='!';
		}
		else
		{
			changed[j++]=original[i];
		}
	}

	for(i=0;i<j;i++)
	{
		printf("%c",changed[i]);
	}
	return 0;
}
	
	
