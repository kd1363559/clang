#include<stdio.h>
main()
{
	int i, sum,n;
	float avg;
	sum = 0; n = 0;
	while (1) {
		printf("®”i|‚X‚X‚X‚ÅI—¹j?");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		sum += i;
		n++;
	}
	avg = (float)sum / n;
	printf("‡Œv%d\n•½‹Ï%.2f\n", sum, avg);
}