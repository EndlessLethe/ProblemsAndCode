#include <stdio.h> 

//��������кܶණ����û��ʵ�֣��Ǹ����Ʒ 
	int main()
	{
		int c;
		int i = 1;
		printf ("%d",i);
		while ((c = getchar()) != ' ' || c != EOF || c != '\n')
		
		//    Ϊë�ᱨ��       [Warning] comparison between pointer and integer
		//�Ҷ��ˣ��Ҵ����˫���� 
		
		{
			putchar(c);
		}
		
		if (c == '\n')
		{
			putchar(c);
			i++;
			printf ("%d",i);
		} 
		
		//����Ĺؼ�����getcharʱ�������\n,��Ϊ���һس�ʱshell����ֱ�Ӵ��� 
		//�����Ǵ�����뷨���˽�powershell��ͻ�֪������뻻�з��� 
	
	return 0;
	}
