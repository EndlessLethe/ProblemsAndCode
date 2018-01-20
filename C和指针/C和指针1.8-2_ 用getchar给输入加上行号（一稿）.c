#include <stdio.h> 

//这个代码有很多东西都没有实现，是个半成品 
	int main()
	{
		int c;
		int i = 1;
		printf ("%d",i);
		while ((c = getchar()) != ' ' || c != EOF || c != '\n')
		
		//    为毛会报错       [Warning] comparison between pointer and integer
		//我懂了，我打的是双引号 
		
		{
			putchar(c);
		}
		
		if (c == '\n')
		{
			putchar(c);
			i++;
			printf ("%d",i);
		} 
		
		//问题的关键在于getchar时不会读到\n,因为当我回车时shell将其直接传入 
		//上面是错误的想法，了解powershell后就会知道会读入换行符的 
	
	return 0;
	}
