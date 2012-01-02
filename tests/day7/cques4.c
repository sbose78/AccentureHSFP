#include<stdio.h>

int main()
{
/*	int x=5;

	for(;x!=0;x--)
		printf("x=%d\n",x--);
	return 0;
*/
	char ch;
	fflush(stdin);
	ch=getchar();
	printf("ch= %d a=%d char=%d", sizeof(ch),sizeof(2),sizeof(char));


}
