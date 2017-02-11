#include <stdio.h>
	int main()
	{
    printf("%d",checkEnd());
	return 0;
	}
	
	int checkEnd()
{
int i=0x12345678;
char *c=(char *)&i; 
return(*c==0x12);
}
