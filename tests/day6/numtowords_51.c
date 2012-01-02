#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void getNumWord(char *ans,int num)
{
	
	char *s;
	s=(char *)malloc(50);
	switch(num)
	{
		case 1: s="ONE";
			strcpy(ans,s);break;
			

		case 2: s="TWO";
			 strcpy(ans,s);break;


		case 3: s="THREE";
			 strcpy(ans,s);break;
		case 4: s="FOUR";
			 strcpy(ans,s);break;
	
		case 5: s="FIVE";
			 strcpy(ans,s);break;
	
		case 6: s="SIX";
			 strcpy(ans,s);break;
	
		case 7: s="SEVEN";
		 strcpy(ans,s);break;
	
		case 8: s="EIGHT";

			 strcpy(ans,s);break;
			
		case 9: s="NINE";
			 strcpy(ans,s);break;
	
		case 0: s="AND";
	
		 strcpy(ans,s);break;
			
	}

}

void getPosWord(char *ans,int pos)
{
	char *s;
	s=(char *)malloc(50);
	switch(pos)
	{	case 1:s="ONES"; strcpy(ans,s);break;
		case 2:s="TENS"; strcpy(ans,s);break;
		case 3: s="HUNDREDS";strcpy(ans,s);break;
		case 4:s="THOUSAND";strcpy(ans,s);break;
	}
	
}

//void handle
void getWord(char *ans,int num,int pos)
{
	char *pword,*nword;
	ans=(char *)calloc(50,1);
        pword=(char *)calloc(50,1);
	nword=(char *)calloc(50,1);


	
	getPosWord(pword,pos);
	
	getNumWord(nword,num);

	printf("\n pos %s num  %s: ",pword,nword);
	ans=strcat(pword,nword);
}

// This function extracts a digit and sends to the getWord fucntion for further processing.

void getNumInWords(int n,char ans[])
{
	char *word;char *completed;
	completed=(char *)calloc(50,1);
	int i,fact=1000;
	for(i=0;n!=0;i++)
	{
		getWord(word,n%10,i);
		printf("\n\n %s %d",word,n%10);
		n/=10;
		completed=strcat(completed,word);	
	}
}
int main()
{
	char ans[50];
	getNumInWords(1234,ans);
//	printf("\n\n COMPLETED:%s",ans);	
	return 0;
}
