#include<stdio.h>
main()
{
	int ia,a;
	printf("8進数の数値:");
	scanf("%d", &ia);
	a = ((ia - (ia % 10))/10) * 8 + (ia % 10);
	printf("10進数=%d", a);
}