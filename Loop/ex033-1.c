#include<stdio.h>
main()
{
	int su, i, k;
	i = 0; k = 0;
	printf("���́H");
	scanf("%d", &su);
	for (; su != -999;)
	{
		k += su;
		i++;
		printf("���́H");
		scanf("%d", &su);

	}
	if (i != 0) {
		printf("���v%d\t����%.2f", k, (float)k / i);
	}
}