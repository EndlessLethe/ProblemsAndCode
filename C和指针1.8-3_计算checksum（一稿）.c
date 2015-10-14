#include <stdio.h>
#define MAXWORDS 1000

	int main()
	{
		signed char checksum = -1;
		signed char c[MAXWORDS];
		int k = 0;
		
		while ((c[k]=getchar()) != EOF && c[k] != '\n')
		{
			checksum += c[k];
			k++;
		}
		
		if (c[k] = '\n')
			checksum += c[k];
		printf("%s\n%d",c,checksum);
		
		
	return 0;
	}
