#include<stdio.h>
#include<string.h>


int isletter(char c)
{
	if(c>='a' && c<='z')return 1;
	if(c>='A' && c<='Z')return 1;
	return 0;
}
int main()
{
        char s[50];
        int i=0,count=0;
        printf("\n ENTER STRING :");
        gets(s);

        for(i=0;i<strlen(s);i++)
        {	printf("%c",s[i]);
                if(i==0 && isletter(s[i]))
                {        count++;
                          continue;
                }
                if(!isletter(s[i]) && isletter(s[i+1])) count++;
        }
        printf("\n NO of words: %d",count);
        return 0;
}


