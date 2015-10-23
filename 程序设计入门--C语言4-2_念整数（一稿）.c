//题目内容：
//你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
//如输入1234，则输出：
//yi er san si
//注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：
//fu er san si yi
//
//输入格式:
//一个整数，范围是[-100000,100000]。
//
//输出格式：
//表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。
//
//输入样例：
//-30
//
//输出样例：
//fu san ling


#include <stdio.h>
	int main()
	{	
	int input=0; 
//此时需要额外的东西使程序 能够读出6位以上的数 
	scanf("%d",&input);
	int a=input;
    int i=0;
    if(input<0) {
    	printf("fu ");
    	input=-input;
    	a=-a;
    	goto _else;
				}
    else {
	_else:
	while(input>0) 	{
	input=input/10;
	i=i+1;			}
//计算出位数i后转换成二进制 


	int k=i;
	int n=0;
	
	while(k>0)		 {
    int p=1;
	int e=k;	
	while(e>0) 		{
		p=10*p;
		e--;
						}
	n=(a%p)/(p/10);	
	k--;
//此时已取出第e位的数字，其值为n (此时为正读)
	switch(n) {
		case 1:	printf("yi");
				if(k>0){
					printf(" ");
						}
				break;
		case 2:	printf("er");
				if(k>0){
					printf(" ");
						}
				break;
		case 3:	printf("san");
				if(k>0){
					printf(" ");
						}
				break;
		case 4:	printf("si");
				if(k>0){
					printf(" ");
						}
				break;
		case 5:	printf("wu");
				if(k>0){
					printf(" ");
						}
				break;
		case 6:	printf("liu");
				if(k>0){
					printf(" ");
						}
				break;
		case 7:	printf("qi");
				if(k>0){
					printf(" ");
						}
				break;
		case 8:	printf("ba");
				if(k>0){
					printf(" ");
						}
				break;
		case 9:	printf("jiu");
				if(k>0){
					printf(" ");
						}
				break;
		case 0:	printf("ling");
				if(k>0){
					printf(" ");
						}
				break;
	default:	printf("请重新输入");
				break;
}
	
	
	
	
	}







		}	
	
	return 0;
	}
