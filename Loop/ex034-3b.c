#include<stdio.h>
main()
{
	int i,c,su;
	printf("���́H");
	scanf("%d", &su);
	i = 1;
	do {
		c = 0;
		do {
			printf("*");
			c++;
		} while (c <i);
		i++;
		printf("\n");
	} while (i<=su);
}