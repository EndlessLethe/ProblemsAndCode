#include <stdio.h>
 

//����ͼ���ýṹ�����ṹ����ʵ�ֱ�����������Чi++������##Ҳ������
//������ָ������������ƺ�����֧��  
//����һ�㣬�ṹ�Ĵ�СΪ8���� ���ڴ���ռ����16�� ����ָ��ĵ�ַû�м��ڽṹ�У�û���γ�struct - pointer - struct ����ʽ 
//�����ҿ�����ָ������ ���ڶ��壩 

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
