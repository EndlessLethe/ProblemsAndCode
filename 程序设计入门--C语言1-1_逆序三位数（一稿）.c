#include <stdio.h>
	int main()
	{
	int a;
	printf("请输入一个三位数：");
	scanf("%d",&a);
	int m=a%10;
	int n=(a/10)%10;
	int l=(a/10)/10;
	int k=100*m+10*n+l;
	printf("%d",k);
	return 0;
	}
