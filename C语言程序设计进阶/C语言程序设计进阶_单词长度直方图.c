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
	//��ͳ���ٻ�ͼ 
	
	k=0;
	while(k<10) {
		printf ("%d",a[k]);
		k++;
	}
	//������
	
	k=1;
	printf ("\n\t\tˮƽ�����ֱ��ͼ\n");
	while(k<=10) {
		int t=0;
		printf("����Ϊ%d�ĵ���:\t",k);
		while(t<=a[k]) {
			printf ("%d ",t);	
			t++;
}
		printf ("\n");
		k++;
} 
	//�Ƚϼ�ª��ˮƽͼ  ���԰Ѵ�ӡ��%d,t���ɺڿ� ������������ϲ��� ASCII 219��178 
	
	k=1;
	printf ("\n\t\t��ֱ�����ֱ��ͼ\n");
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
	//����������Ƚ����� 
	
	
	
	
	return 0;
	}
