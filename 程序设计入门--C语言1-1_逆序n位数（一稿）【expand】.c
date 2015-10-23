#include <stdio.h>

	int nis (int a);

	int main()
	{
		int a,i;
		printf("请输入一个N位数：");
		scanf("%d",&a);
//首先确定这个数的位数 =i
//		while(a>0)
//		{
//			a=a/10;
//			i=i+1;
//		}
		
//可以直接用迭代的方式（可以不确定i） 
		nis (a);
		
		return 0;
	}
	
	int nis (int a)
	{
		printf("%d",a%10);
		if ((a/10)>0)
		{
			nis (a/10);
		}
		return a;
	}
