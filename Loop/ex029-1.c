#include<stdio.h>
main()
{
	int su;
	printf("��������");
	scanf("%d", &su);
	while (su) {
		printf("*");
		su--;
	}
}