#include<stdio.h>
main()
{
	int i, sum;
	sum = 0;
	i = 1;
	while (i <= 10) {
		sum += i;
		printf("‚P‚©‚ç%d‚Ü‚Å‚Ì˜a=%d\n", i,sum);
		i++;
	}
}