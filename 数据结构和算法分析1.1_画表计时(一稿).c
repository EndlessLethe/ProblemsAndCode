#include <stdio.h>
 

//我试图利用结构，但结构难以实现遍历（不能有效i++），宏##也不可以
//而且连指针的自增运算似乎都不支持  
//还有一点，结构的大小为8，但 在内存中占据了16， 而且指针的地址没有夹在结构中，没有形成struct - pointer - struct 的形式 
//所以我考虑用指针数组 （第二稿） 

int main()
{	
	int i;
	int a, b;
	printf("%d\n",sizeof(a));
	printf("%d\n",&a);
	printf("%d\n",&b);
	
	
	struct ntime {
		int number;
		int time;
	};
	
	struct ntime test1 = {1, 0}, test2 = {100, 0}, test3 = {10000, 0}, test4 = {1000000, 0}, test5 = {100000000, 0},
	*p1 = &test1, *p2 = &test2, *p3 = &test3, *p4 = &test4, *p5 = &test5;
	printf("%d\n",sizeof(*p1));
	printf("%d\n",p1);

	printf("%d\n",p2);
	printf("%d\n",p3);
	printf("%d\n",&p1);
	printf("%d\n",&p2);	
	
	
	printf("\tnumber");
	for (i = 0; i < 5; i++) {
		printf("\t%d ", (*(p1+4)).number);
		printf("\t%d ", (p2)->number);
	} 
	printf("\n\ttime");
	for (i = 0; i < 5; i++) {
		printf("\t%d", (p1++)->time);
	} 
	return 0;
}
