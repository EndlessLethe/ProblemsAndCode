#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXLINES 5

char *lineptr[MAXLINES];
clock_t start, stop;
double duration;

int readlines(char *lineptr[], int maxlines);


//显然这个程序又失败了 

	int main()
	{
	int i = 0;
	start = clock();
	while (i++<10000)
		readlines(lineptr, MAXLINES);
	stop = clock();
	duration = ((double)(stop - start))/CLK_TCK;
	printf("duration=%g",duration);
	return 0;
	}
	
	
	#define MAXLEN 1000
	int getline(char *, int);
//	char *alloc(int);
	
	int readlines(char *lineptr[], int maxlines)
	{
		int len, nlines;
		char *p, line[MAXLEN];
		nlines = 0;
		while((len = getline(line, MAXLEN))>0)
			if (nlines >= maxlines || (p=(char*)malloc(len)) == NULL)
				return -1;
			else {
				line[len-1] = '\0';
				strcpy(p, line);
				lineptr[nlines++] = p;
			}
		return nlines;
	}

	int getline(char s[], int lim)
	{
		int c, i;
		i=0;
		while (--lim > 0 && (c=getchar())!=EOF && c !='\n')
			s[i++] = c;
		if(c=='\n')
			s[i++]=c;
		s[i]='\0';
		return i;
	}
