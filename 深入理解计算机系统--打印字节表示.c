#include <stdio.h>
	int show(char* start, int len);
	void main()
	{
	int x=100;
	printf("��ַ��%.2x\n", &x);
	show((char*) &x, sizeof(int));
	}


	int show(char* start, int len)
	{
	int i=0;
	while(i<len)
	{
		printf("�ֽڵ�ַ��%.2x   ", start[i]);
		i++;
	}
	return 0;
	}
//
//typedef unsigned char *byte_pointer;
//void show_bytes(byte_pointer start, int len);
////ע��ӷֺ� 
//
//
//void main()
//{
//	
////����AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA 
////	int x=4452;
////	int y=4453;
////	show_bytes((byte_pointer)&x,sizeof(int));
////	show_bytes((byte_pointer)&y,sizeof(int));
////	printf("%x", &x); 
////}
//
////  ���˵��������������һ������ַ�͵�ַ����
//
////����BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB 
//int val=0x87654321;
//byte_pointer valp=(byte_pointer)&val;
//show_bytes(valp, 1);
//show_bytes(valp, 2);
//show_bytes(valp, 3);
//}
////   ��Ȼ�����ӡ�Ǵ�� 
//
//
//void show_bytes(byte_pointer start, int len)
//{
//	int i;
//	for (i=0; i<len;i++)
//		printf("%.2x  ",start[i]);
//	printf("\n");
//}
//
//void show_int (int x)
//{
//	show_bytes((byte_pointer)&x,sizeof(int));
//}
