#include<stdio.h>
main()
{
	int i,c;
	c = 0;
	printf("”‚ÍH");
	scanf("%d", &i);
	do {
		c = 0;
		do {
			printf("*");
			c++;
		} while (c < 5);
		printf("\n");
		i--;
	} while (i>0);
}