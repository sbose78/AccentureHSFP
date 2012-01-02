#include <stdio.h>

int main()
{
	char const *p;
	char *const q="HELLO";
	const char *r;

	p="HELLO";
	//q="HELLO";
	r="HELLO";
	
	p++;q++;r++;
	
	printf("%s %s %s",p,q,r);
	return 0;
}
