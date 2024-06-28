#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i,j,k;
	printf("”’l‚ÍH(0`6)");
	scanf("%d", &k);
	for (j = 0; j < 10; j++) {
		putchar(day[k][j]);
	}
	putchar('\n');
}