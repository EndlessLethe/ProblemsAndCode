#include <stdio.h>
	int main()
	{
	
	int  i, first;
	int a[10];
	int k=0;
	while(k<=10) {
		a[k]=0;
		k++;
}
	first =getchar();
	
	while(first!=EOF) {

		if(first==' '||first=='\b'||first=='\n') {
			a[i]++;
			i=0;
		}
		else {
		i++;
		}		
		first=getchar();
	}
	//先统计再画图 
	
	k=0;
	while(k<10) {
		printf ("%d",a[k]);
		k++;
	}
	//检验下
	
	k=1;
	printf ("\n\t\t水平方向的直方图\n");
	while(k<=10) {
		int t=0;
		printf("长度为%d的单词:\t",k);
		while(t<=a[k]) {
			printf ("%d ",t);	
			t++;
}
		printf ("\n");
		k++;
} 
	//比较简陋的水平图  可以把打印的%d,t换成黑块 但这个编译器认不到 ASCII 219或178 
	
	k=1;
	printf ("\n\t\t垂直方向的直方图\n");
	while(k<=10) {
		int t=1;
		while(t<=10) {
			if(a[t]<1) {
				printf("0\t");
			}
			else {
				printf("1\t");
			}
			a[t]--;
			t++;
		}
		printf ("\n");
		k++;
} 
	//。。。这个比较奇葩 
	
	
	
	
	return 0;
	}
