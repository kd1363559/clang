#include<stdio.h>
main()
{
	int num,i;
	i = 0;
	printf("数を入れて：");
	scanf("%d", &num);
	while (num > i) {
		printf("*");
		i++;
	}
}