#include<stdio.h>
main()
{
	int c[10];
	int i = 0;
	int a;
	printf("Ži-999ĹIšjH");
	scanf("%d", &a);
	while (a != -999) {
		c[i] = a;
		i++;
		printf("Ži-999ĹIšjH");
		scanf("%d", &a);
	}
	c[i] = '\0';
	printf("zńc=");
	for (i = 0; c[i] != '\0'; i++) {
		printf(" %d ", c[i]);
	}
}