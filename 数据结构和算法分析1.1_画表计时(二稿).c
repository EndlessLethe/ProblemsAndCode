#include <stdio.h>
#include <time.h>

clock_t start, stop;
//����ͼ���ýṹ�����ṹ����ʵ�ֱ�����������Чi++������##Ҳ������
//������ָ������������ƺ�����֧��  
//����һ�㣬�ṹ�Ĵ�СΪ8���� ���ڴ���ռ����16�� ����ָ��ĵ�ַû�м��ڽṹ�У�û���γ�struct - pointer - struct ����ʽ 
//�����ҿ�����ָ������ ���ڶ��壩 

int main()
{	
	int i;
	struct ntime {
		long int number;
		double time;
	} test[5] = {1, 0, 100, 0, 1000, 0, 1000000, 0, 100000000, 0} ;
	
	struct ntime *p;
	p = test; 
//	test[1] = {1, 0}, test[2] = {100, 0}, test[3] = {10000, 0}, test[4] = {1000000, 0}, test[5] = {100000000, 0};  ���������帳ֵ  
	
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
	//��ͻȻ���������û���κ����壬������/2 �𣬿϶��� һ���� 
	return 0;
}
