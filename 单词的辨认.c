#include <stdio.h>
	int main()
	{
	int  next , first;
	next=first =getchar();
	
	while(first!=EOF) {

		if(first==' '||first=='\b'||first=='\n') {
			next=getchar();
			printf("\n");
			while(next==' '||next=='\b'||next=='\n') {
				next=getchar();
			}
		printf("%c",next);
		}
		else {
		putchar(first);
		}		
		next=first=getchar();
	}
	
	
	
	return 0;
	}
	
	//ȱ����δת������ո�Ϊһ��   ������ 
