#include <stdio.h>
//	int two(void)
	int main()
	{
	int c=getchar();
	const int Uncode1=47 ;  //47��/ 
	const int Uncode2 =42;  //42��* 
while(c!=EOF||c!=10){
	if (c==Uncode1){
		c=getchar();
		if(c==Uncode2) {//����/*ע����
			c=getchar();
			while(c!=Uncode2) {
				again:
				c=getchar();
			}
			if (c==Uncode2){
				c=getchar();
				if (c==Uncode1){//��ʱ��ȥ��c=/ 
//					c=999;      //ʹ��c������if 
					goto out;
				}
				else {
					goto again;
				}
			}
                         //ͻȻ�����������,"//"��β�ǲ��еģ���*/���Զ
		}
		else if (c==Uncode1){   //����//ע����
			c=getchar();
			while (c!=10){
				c=getchar();
			}
			goto out;   //��ʱ��ȥ��c=\n 
		
		}
		else {//���û�н���ע��
			printf("/");
			putchar(c);
		}
	}
	putchar(c);
	out:
	c=getchar();

}
	return 0;
	}
//	
//	int two(void)
//	{
//	int i=0;
//	if (c==Uncode1){
//		c=getchar();
//		if(c==Uncode1||c==Uncode2) {
//			return 1;
//		}
//		else {
//			return 0;
//		}
//	
//	}
