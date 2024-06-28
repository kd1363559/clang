#include<stdio.h>
main()
{
	int i,sum;
	i = 1; sum = 0;
	while (1) {
		sum += i;
		
		if (sum > 300) {
			printf("%d=%d\n", i, sum);
			break;
		}
		printf("%d+", i);
		i++;
	}
}