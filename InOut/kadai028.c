#include<stdio.h>
main()
{
	long int  a;
	printf("整数？");
	scanf("%ld", &a);
	printf("2倍すると%ld\n3倍すると%ld\n4倍すると%ld",a*2,a*3,a*4);
}