//题目内容：
//我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
//现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
//
//输入格式:
//两个整数，第一个表示n，第二个表示m。
//
//输出格式：
//一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
//
//输入样例：
//2 4
//
//输出样例：
//15



#include <stdio.h>
	int main()
	{
	int n=0;
	int m=0;
	int sum=0;
	scanf("%d %d",&n,&m);
	int x=n;
	while(x<=m) {
		int jud=1;
		int k=2;
		while(k<x) {
			if(x%k!=0)  {
				k++;

						}
			else			{
				jud=0;
				goto out;
							}
					}
	out:

	if (jud==1){sum=x+sum;
	}
	x++;
				}	

	printf("%d",sum);
	return 0;
	}
