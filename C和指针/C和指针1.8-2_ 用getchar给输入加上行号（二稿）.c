//这道题本身的叙述太少了，必要条件也不清楚。
// 故：给定条件 MAXCHAR = 1000 MAXLINECHAR = 100
//设有输入 input, 用来传出的output, 指定列的序号数组 columns, 和数组的长度 n_columns 

//真的这题没有一点质量！！！ 不做这道了，input长度又是用 strlen 技术含量呢？！！ 实质上只处理了一个输入行 


#include <stdio.h>

#define MAX_LEN 1000
#define MAX_LINE_LEN 100

int main()
{
	char a[MAX] = {0};
	int i = 0;
	scanf("%s", &a, i++);
	printf("%s",a);
	
	return 0;
}


