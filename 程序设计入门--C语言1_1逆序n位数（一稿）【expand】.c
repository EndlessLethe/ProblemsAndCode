#include <stdio.h>

	int nis (int a);

	int main()
	{
		int a,i;
		printf("������һ��Nλ����");
		scanf("%d",&a);
//����ȷ���������λ�� =i
//		while(a>0)
//		{
//			a=a/10;
//			i=i+1;
//		}
		
//����ֱ���õ����ķ�ʽ�����Բ�ȷ��i�� 
		nis (a);
		
		return 0;
	}
	
	int nis (int a)
	{
		printf("%d",a%10);
		if ((a/10)>0)
		{
			nis (a/10);
		}
		return a;
	}
