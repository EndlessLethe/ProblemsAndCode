//��Ŀ���ݣ�
//��ĳ���Ҫ����һ����������Χ��[-100000,100000]��Ȼ���ú���ƴ�������������ÿһλ���������
//������1234���������
//yi er san si
//ע�⣬ÿ���ֵ�ƴ��֮����һ���ո񣬵��������ֺ���û�пո񡣵���������ʱ��������Ŀ�ͷ���ϡ�fu������-2341���Ϊ��
//fu er san si yi
//
//�����ʽ:
//һ����������Χ��[-100000,100000]��
//
//�����ʽ��
//��ʾ���������ÿһλ���ֵĺ���ƴ����ÿһλ���ֵ�ƴ��֮���Կո�ָ���ĩβû�пո�
//
//����������
//-30
//
//���������
//fu san ling


#include <stdio.h>
	int main()
	{	
	int input=0; 
//��ʱ��Ҫ����Ķ���ʹ���� �ܹ�����6λ���ϵ��� 
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
//�����λ��i��ת���ɶ����� 


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
//��ʱ��ȡ����eλ�����֣���ֵΪn (��ʱΪ����)
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
	default:	printf("����������");
				break;
}
	
	
	
	
	}







		}	
	
	return 0;
	}
