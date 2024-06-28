#include<stdio.h>
main()
{
	int c[10];
	int i = 0;
	int a;
	printf("整数（-999で終了）？");
	scanf("%d", &a);
	while (a != -999) {
		c[i] = a;
		i++;
		printf("整数（-999で終了）？");
		scanf("%d", &a);
	}
	c[i] = '\0';
	printf("配列c=");
	for (i = 0; c[i] != '\0'; i++) {
		printf(" %d ", c[i]);
	}
}