#include<stdio.h>
main()
{
	int sum, i;
	sum = 0;
	while (1) {
		printf("”‚ğ“ü‚ê‚ÄF");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		sum += i;
	}
	printf("‡Œv%d\n", sum);
}