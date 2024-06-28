#include<stdio.h>
main()
{
	int i, su;
	su = 0;
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &i);
	while (su <= 10) {
		printf("%d + %d = %d\n", i, su, i + su);
		su++;
	}
}