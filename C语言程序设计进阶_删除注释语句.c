#include <stdio.h>
//	int two(void)
	int main()
	{
	int c=getchar();
	const int Uncode1=47 ;  //47ÊÇ/ 
	const int Uncode2 =42;  //42ÊÇ* 
while(c!=EOF||c!=10){
	if (c==Uncode1){
		c=getchar();
		if(c==Uncode2) {//½øÈë/*×¢ÊÍÁË
			c=getchar();
			while(c!=Uncode2) {
				again:
				c=getchar();
			}
			if (c==Uncode2){
				c=getchar();
				if (c==Uncode1){//´ËÊ±³öÈ¥µÄc=/ 
//					c=999;      //Ê¹µÃc²»´¥·¢if 
					goto out;
				}
				else {
					goto again;
				}
			}
                         //Í»È»·¢¾õÎÒÏë´íÁË,"//"½áÎ²ÊÇ²»ĞĞµÄ£¬¶ø*/¿ÉÒÔ¶
		}
		else if (c==Uncode1){   //½øÈë//×¢ÊÍÁË
			c=getchar();
			while (c!=10){
				c=getchar();
			}
			goto out;   //´ËÊ±³öÈ¥µÄc=\n 
		
		}
		else {//Èç¹ûÃ»ÓĞ½øÈë×¢ÊÍ
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
