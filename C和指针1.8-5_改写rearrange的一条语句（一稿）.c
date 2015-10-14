#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXWORDS 1000

void getline (char* output);
char c = 0;

int main()
{

	char output[MAXWORDS] = {0};
	while ((c = getchar()) != EOF)
	{
		getline(output);
	}
	printf("%s", output);
	return 0;
}

void getline (char* output)
{
	char a[MAXWORDS] = {0};
	int i = 0;
	
	do
	{
		a[i++] = c;
	}	while ((c = getchar()) != '\n');
	
	a[++i] = '\0';
	
	if (strlen(a) > strlen(output))
	{
		int l;
		for (l=0; l <= strlen(a); l++)
			output[l] = a[l];
	}	
}
