#include<stdio.h>
main()
{
	int i,c,su;
	su = 1;
	printf("数は？");
	scanf("%d", &i);
	do {
		c = 0;
		do {
			printf("*");
			c++;
		} while (c <su);
		su++;
		i--;
		printf("\n");
	} while (i>0);
}
/*#include<stdio.h>
main()
{
	int i,c,su;
	printf("数は？");
	scanf("%d", &i);
	su=i+1;
	do {
		c = 0;
		do {
			printf("*");
			c++;
		} while (c <su-i);
		i--;
		printf("\n");
	} while (i>0);
}*/