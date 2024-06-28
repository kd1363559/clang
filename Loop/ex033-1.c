#include<stdio.h>
main()
{
	int su, i, k;
	i = 0; k = 0;
	printf("”‚ÍH");
	scanf("%d", &su);
	for (; su != -999;)
	{
		k += su;
		i++;
		printf("”‚ÍH");
		scanf("%d", &su);

	}
	if (i != 0) {
		printf("‡Œv%d\t•½‹Ï%.2f", k, (float)k / i);
	}
}