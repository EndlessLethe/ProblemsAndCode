#include <stdio.h>
	int IsDigOrNum (int k)
	{
	if(48<=k&&k<=57){//数字 
		return 1;
	} 
	else if(65<=k&&k<=90){//大写 
		return 2;
	} 
	else if(97<=k&&k<=122){//小写 
		return 3;
	} 
	else {
		return 0;
	}
	}
	
	
	int Print(int a ,int b)
	{
	while(a<b) {
	a++;
	putchar(a); 	
	}
	return 0;
	}
	
	int main()
	{
	int  c = getchar();
	int temp=c;
	int way=0;
	while(c!=10||c!=EOF) {
		int end =0;
		if(IsDigOrNum (c)==1) {
			putchar(c);
			way=1;
		}
		else if(IsDigOrNum (c)==2) {
			putchar(c);
			way=2;
		}
		else if(IsDigOrNum (c)==3) {
			putchar(c);
			way=3;
		}
		else{
			if(way==0){
				putchar(c);
			}
			else if(way==1){
				end=getchar();
				Print(temp,end);
				way=0;
			}
			else if(way==2){
				end=getchar();
				Print(temp,end);
				way=0;
			}
			else {
				end=getchar();
				Print(temp,end);
				way=0;
			}
			
		}
	temp=c;
	c=getchar();

	}

	
	//虽然这个代码一团糟，第一个函数点用没有，几条线也没有起到效果，但毕竟可以实现功能 
	
	return 0;
	}
