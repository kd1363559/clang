#include<stdio.h>
main()
{
	int ia,a;
	printf("8i”‚Ì”’l:");
	scanf("%d", &ia);
	a = ((ia - (ia % 10))/10) * 8 + (ia % 10);
	printf("10i”=%d", a);
}