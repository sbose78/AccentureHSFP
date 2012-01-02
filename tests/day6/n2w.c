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
        {       case 1:s=""; strcpy(ans,s);break;
                case 2:s="-TY"; strcpy(ans,s);break;
                case 3: s="-HUNDRED";strcpy(ans,s);break;
                case 4:s="-THOUSAND";strcpy(ans,s);break;
        }

}

//void handle
void getWord(char *ans,int num,int pos)
{
	static int teen=0;
        char *pword,*nword;
	int i=0,j=0;
        //ans=(char *)calloc(50,1);
        pword=(char *)calloc(50,1);
        nword=(char *)calloc(50,1);

	if(pos==2)
	{	if(num==1)teen=1;
		
				

	}
	
	else if(pos==1)
	{	if(teen==1) //ones place was 1 , ie Four-teen , Fif-teen
		{

		}
		else{


		}
	}
        getPosWord(pword,pos);
        getNumWord(nword,num);

        printf("\n pos %s num  %s: ",pword,nword);

	for(j=0;j<strlen(nword);j++)
		ans[i++]=nword[j];
	
	for(j=0;j<strlen(pword);j++)
		ans[i++]=pword[j];
	ans[i]='\0';

        //ans=strcat(pword,nword);
}

// This function extracts a digit and sends to the getWord fucntion for further processing.

void getNumInWords(int n,char ans[])
{
        char *word;char *completed;
	word=(char *)calloc(50,1);
        completed=(char *)calloc(50,1);
        int i,fact=1000;
        for(i=1;n!=0;i++)


        {
                getWord(word,n%10,i);
                printf("\n\n %s %d",word,n%10);
                n/=10;
                completed=strcat(completed,word);
        }
}

int main()
{
        char *ans;
        
	ans=(char *)calloc(50,1);
	getNumInWords(1234,ans);
        printf("\n\n COMPLETED:%s",ans);
        return 0;
}
                                                                        
                                                                                                                                     
                                                                                                                                     
                                                                                                                                     
                                                                                                                                     
    
