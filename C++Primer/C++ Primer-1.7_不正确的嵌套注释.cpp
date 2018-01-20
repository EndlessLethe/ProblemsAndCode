#include <stdio.h>

int main()
{
	printf("
	/* 
	 * 注释对/* */ 不能嵌套。
	 * 会被认为是源码，
	 * 像剩余程序一样处理
	 */
	 ");
	return 0;
}

