#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 1000


void rearrange(char *output, char const *input, int n_columns, int const columns[]);

int main()
{

return 0;
}

void rearrange(char *output, char const *input, int n_columns, int const columns[])
{
	int col=0;
	int output_col = 0;
	int len = 0;
	len = strlen(input);
	
	//处理标号
	for (col = 0; col < n_columns; col += 2)
	{
		int n_chars = columns[col + 1] - columns[col] + 1;
		
		//如果输出已满
		if(output_col == MAX_INPUT - output_col - 1);
			{
				break;
			}
			
		//若 col不是递增的顺序 
		if (columns[col] >= len)
		{
			continue; 
		}
			
		//如果空间不够完整的
		if (output_col + n_chars > MAX_INPUT - 1)
			n_chars = MAX_INPUT - output_col -1;
			
		//复制
		strncpy(output + output_col, input + columns[col], n_chars);
		output_col += n_chars;
		
		output[output_col] = '\0';
	}
}

//这个程序还是有个问题，就是当 [col+1]可能超出输入行的列，而[col]不超出 
