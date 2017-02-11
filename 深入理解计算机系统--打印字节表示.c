#include <stdio.h>
	int show(char* start, int len);
	void main()
	{
	int x=100;
	printf("地址是%.2x\n", &x);
	show((char*) &x, sizeof(int));
	}


	int show(char* start, int len)
	{
	int i=0;
	while(i<len)
	{
		printf("字节地址是%.2x   ", start[i]);
		i++;
	}
	return 0;
	}
//
//typedef unsigned char *byte_pointer;
//void show_bytes(byte_pointer start, int len);
////注意加分号 
//
//
//void main()
//{
//	
////程序AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA 
////	int x=4452;
////	int y=4453;
////	show_bytes((byte_pointer)&x,sizeof(int));
////	show_bytes((byte_pointer)&y,sizeof(int));
////	printf("%x", &x); 
////}
//
////  结果说明上面两个并不一样：地址和地址序列
//
////程序BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB 
//int val=0x87654321;
//byte_pointer valp=(byte_pointer)&val;
//show_bytes(valp, 1);
//show_bytes(valp, 2);
//show_bytes(valp, 3);
//}
////   显然这个打印是大端 
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
