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
	
	//������
	for (col = 0; col < n_columns; col += 2)
	{
		int n_chars = columns[col + 1] - columns[col] + 1;
		
		//����������
		if(output_col == MAX_INPUT - output_col - 1);
			{
				break;
			}
			
		//�� col���ǵ�����˳�� 
		if (columns[col] >= len)
		{
			continue; 
		}
			
		//����ռ䲻��������
		if (output_col + n_chars > MAX_INPUT - 1)
			n_chars = MAX_INPUT - output_col -1;
			
		//����
		strncpy(output + output_col, input + columns[col], n_chars);
		output_col += n_chars;
		
		output[output_col] = '\0';
	}
}

//����������и����⣬���ǵ� [col+1]���ܳ��������е��У���[col]������ 
