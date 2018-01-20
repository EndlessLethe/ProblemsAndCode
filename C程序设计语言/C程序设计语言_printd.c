#include <stdio.h>
	int main()
	{
	int n;
	scanf("%d",&n);
	printd(n);
	}
	
	void printd(int k)
	{
	if(k/10)
		printd(k/10);
	putchar(k%10+'0');
	}
