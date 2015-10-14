#include <stdio.h>

int main()
{
	int x=0;
	int n=0;
	scanf("%d",&n);
	for ( x=1; x<=n; x++ ) {
		int i;
		int isPrime = 1;	//	x是素数
		for ( i=2; i<x; i++ ) {
			if ( x % i == 0 ) {
				isPrime = 0;
				break;
			}
		}
		if ( isPrime == 1 ) {
			printf("%d ", x);
		} 
	}
	printf("\n");
	return 0;
}//输出的包括1、2 

