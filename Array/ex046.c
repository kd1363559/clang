#include<stdio.h>
main()
{
	int n, i, gokei;
	int a[][3]={ {10,20,30},{1,2,3} };
	for ( n = 0; n < 2; n++) {
		for (gokei=0,i = 0; i < 3; i++) {
			printf("a[%d][%d]=%d\n", n, i, a[n][i]);
			gokei += a[n][i];

		}
		printf("%ds–Ú‚Ì‡Œv%d\n", n, gokei);
	}
}