#include <stdio.h>
	int show(char* start, int len);
	void main()
	{
	const char* s ="abcdef";
	show((char*) s, strlen(s));
	}


	int show(char* start, int len)
	{
	int i=0;
	while(i<len)
	{
		printf("×Ö½ÚµØÖ·ÊÇ%.2x   ", start[i]);
		i++;
	}
	return 0;
	}
