#include <stdio.h>
#include <time.h>

clock_t start, stop;
//我试图利用结构，但结构难以实现遍历（不能有效i++），宏##也不可以
//而且连指针的自增运算似乎都不支持  
//还有一点，结构的大小为8，但 在内存中占据了16， 而且指针的地址没有夹在结构中，没有形成struct - pointer - struct 的形式 
//所以我考虑用指针数组 （第二稿） 

int main()
{	
	int i;
	struct ntime {
		long int number;
		double time;
	} test[5] = {1, 0, 100, 0, 1000, 0, 1000000, 0, 100000000, 0} ;
	
	struct ntime *p;
	p = test; 
//	test[1] = {1, 0}, test[2] = {100, 0}, test[3] = {10000, 0}, test[4] = {1000000, 0}, test[5] = {100000000, 0};  不能再整体赋值  
	
	for (i = 0; i < 5; i++) {
		printf("\t%d ", test[i].number);
//		printf("\t%d ", (p2)->number);
	} 
	printf("\n\ttime");
	for (i = 0; i < 5; i++) {
		int k = 0, a = 1;
		start = clock();
		while (k <= 1000000000){
			a = test[i].number / 2;
			k++;
		}
		stop = clock();
		test[i].time = ((double)(stop-start))/CLK_TCK;
		printf("\t%.5f", (p++)->time);
	} 
	//我突然发现这道题没有任何意义，不都是/2 吗，肯定是 一样的 
	return 0;
}
